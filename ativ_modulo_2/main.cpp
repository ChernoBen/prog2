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
    virtual void mostraDados(){
      cout<<"marca: " + this->marca <<" modelo: "+this->modelo<<" ano: "+to_string(this->ano)<<" preco venda: "+to_string(this->precoVenda)<<endl;
    }
};

//2
class AutomovelAVenda  : public VeiculoAVenda{
  private:
    float motor; //ex:1.0,1.4,1.6
    bool cambio;
  
  public:
    AutomovelAVenda(float engine,bool transmission):VeiculoAVenda("brand","model",2000,35000),motor(engine),cambio(transmission){}

    void setMotor(float engine){this->motor = engine;}
    void setCambio(bool transmission){this->cambio = transmission;}

    float getMotor(){return this->motor;}
    bool getCambio(){return this->cambio;}

    void mostraDados()override{cout<<"motor: "+ to_string(this->motor)<<" cambio automatico: " + to_string(this->cambio);}
};

//3
class MotocicletaAVenda : public VeiculoAVenda{
  private:
    int cilindrada;

  public:
    MotocicletaAVenda(int cc):VeiculoAVenda("brand","moto",2005,15000),cilindrada(cc){};
    void setCilindrada(int cc){this->cilindrada = cc;}

    int getCilindrada(){return this->cilindrada;}
    void mostraDados()override{cout<<" cilindrada: "+to_string(this->cilindrada);}
};


int main() {
 
}