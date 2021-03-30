#include <iostream>
#include <string>

using namespace std;

//1
class VeiculoAVenda{
  private:
    string marca;
    string modelo;
    int ano;
    float precoVenda;

  public:
    VeiculoAVenda(string brand,string model,int year,float price):marca(brand),modelo(model),ano(year),precoVenda(price){};  
    void setMarca(string brand){this->marca = brand;} 
    void setModelo(string model){this->modelo = model;} 
    void setAno(int year){this->ano = year;}
    void setPrecoVenda(float price){this->precoVenda = price;}

    string getMarca(){return this->marca;}
    string getModelo(){return this->modelo;}
    int getAno(){return this->ano;}
    float getPrecoVenda(){return this->precoVenda;}
    virtual string mostraDados(){
      string dados = "marca: " + this->marca +" modelo: "+this->modelo+" ano: "+to_string(this->ano)+" preco venda: "+to_string(this->precoVenda);
      return dados;
    }
};

//2
class AutomovelAVenda  : public VeiculoAVenda{
  private:
    float motor; //ex:1.0,1.4,1.6
    bool cambio;
  
  public:
    AutomovelAVenda(float engine,bool transmission):VeiculoAVenda("brand","carro",2000,35000),motor(engine),cambio(true){}

    void setMotor(float engine){this->motor = engine;}
    void setCambio(bool transmission){this->cambio = transmission;}

    float getMotor(){return this->motor;}
    bool getCambio(){return this->cambio;}

    string mostraDados()override{return "marca: "+this->getMarca()+" modelo: "+this->getModelo()+" ano: "+to_string(this->getAno())+" preco: "+to_string(this->getPrecoVenda())+" motor: "+ to_string(this->motor)+" cambio automatico: " + to_string(this->cambio);}
};

//3
class MotocicletaAVenda : public VeiculoAVenda{
  private:
    int cilindrada;

  public:
    MotocicletaAVenda(int cc):VeiculoAVenda("brand","moto",2005,15000),cilindrada(cc){};

    void setCilindrada(int cc){this->cilindrada = cc;}
    int getCilindrada(){return this->cilindrada;}
    string mostraDados()override{return "marca: "+this->getMarca()+" modelo: "+this->getModelo()+" ano: "+to_string(this->getAno())+" preco: "+to_string(this->getPrecoVenda())+" cilindrada: "+to_string(this->cilindrada);}
};

struct {
  string car1;
  string car2;
  string moto1;
  string moto2;
  float total;
  
}total;

int main() {

  AutomovelAVenda car1(1.4,true);
  AutomovelAVenda car2(1.0,false);
  car1.mostraDados();
  car2.mostraDados();

  MotocicletaAVenda moto1(125);
  MotocicletaAVenda moto2(100);

  total.car1 = car1.mostraDados(); 
  total.car2 = car2.mostraDados();
  total.moto2 = moto2.mostraDados();
  total.moto1 = moto1.mostraDados();
  total.total = car1.getPrecoVenda() + car2.getPrecoVenda() + moto2.getPrecoVenda() + moto1.getPrecoVenda();

  cout<<total.car1<<endl<<total.car2<<endl<<total.moto1<<endl<<total.moto2<<endl<<" total: "+ to_string(total.total);
 
}