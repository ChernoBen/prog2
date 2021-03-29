#include <iostream>
#include <string>
using namespace std;

class ItemFatura{
  private:
    int id;
    string nome;
    int qtd;
    float precoUnit;
  
  public:
    ItemFatura(): id(0),nome("nulo"),qtd(0),precoUnit(0){}
    ItemFatura(int id,string name,int qtd,float precoUnit):id(id),nome(name),qtd(qtd),precoUnit(precoUnit){}

    void setId(int ident){this->id=ident;}
    void setNome(string nome){this->nome=nome;}
    void setQtd(int qtd){this->qtd=qtd;}
    void setPu(float precoUnit){this->precoUnit=precoUnit;}

    int getId(){return id;}
    string getNome(){return nome;}
    int getQtd(){return qtd;}
    float getPu(){return precoUnit;}
    float totalItem(){return qtd*precoUnit;}
    void imprime(){
      cout << "id: "+to_string(id)<<endl;
      cout<<"Nome: "+nome<<endl;
      cout<<"Preco unitatrio: "+to_string(precoUnit)<<endl;
      cout<< "Preco Total: " +to_string(totalItem())<<endl;
    }

};
int main() {
  ItemFatura item1;
  ItemFatura item2(1,"Memoria Ram",2,345.65);
  
  item1.imprime();
  item2.imprime();
  item1.setId(77);
  item2.setNome("HD Samsung");
  item1.setQtd(3);
  item1.setPu(285.99);
  item1.imprime();
}