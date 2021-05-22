#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cartao{
  private:
    string destinatario;
  public:
    virtual void mensagem()=0;
    string getNome(){return destinatario;}
    friend istream &operator >> (istream &is, Cartao &crt);
};
class CartaoNatal:public Cartao{
  public:
    void mensagem()override{
      cout<<"Feliz Natal "+getNome()+"."<<endl;
    };
};
class CartaoAniversario:public Cartao{
  public:
    void mensagem()override{
      cout<<"Feliz Aniversario "+getNome()+"."<<endl;
    }
};
istream &operator>>(istream &is, Cartao &crt) {
    is >> crt.destinatario;
    return is;
}
int main(){
  char entrada;
  CartaoAniversario aniversario;
  vector<CartaoAniversario> vAniversario;
  CartaoNatal natal;
  vector<CartaoNatal> vNatal;
  while(entrada != 'N'){
    cout<<"Entre com o tipo de cartão"<<endl;
    cout<<"entre com '0' para cartao de natal "<<endl;
    cout<<"entre com '1' para cartão de aniversario"<<endl;
    cout <<"entre com 'N' para sair"<<endl;
    cin >>entrada;
    switch(entrada){
      case '0':
        cout <<"Entre com destinatario"<<flush;
        cin >> natal;
        vNatal.push_back(natal);
        break;
      case '1':
        cout<<"Entre com destinatario"<<flush;
        cin>>aniversario;
        vAniversario.push_back(aniversario);
        break;
    }
  }
  for(auto item : vNatal){item.mensagem();}
  for(auto item : vAniversario){item.mensagem();}

}