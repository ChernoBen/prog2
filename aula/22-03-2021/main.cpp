//vector::push_back
#include <iostream>
#include <string>
#include<vector>


using namespace std;
class Conta{

  private:

    int numero;
    string nome;
    float saldo;

  public:

    Conta(int num,string name):numero(num),nome(name){};
    Conta(int num,string name,float sal):numero(num),nome(name),saldo(sal){};

    int getNumero(){return numero;}
    string getNome(){return nome;}
    float getSaldo(){return saldo;}

    void setNumero(int num){numero = num;}
    void setNome(string name){this->nome = name;}
    void setSaldo(float saldo){this->saldo = saldo;}
    float depositar(float valor){saldo+=valor;return saldo;}
    float sacar(float saque){
      
      if(saldo - saque > 0){
        
        saldo -= saque;
        return saque;

      }else{
        
        cout<< "Saldo insuficiente"<<endl;
        return saldo;

      }
    }

    void imprime(){

      cout <<"Conta num: " + to_string(numero) << endl;
      cout <<"Saldo: "+ to_string(saldo) << endl;
      cout << "nome: " + nome << endl;
    } 
};


int main() {

  Conta c1(2020,"Fulando");
  Conta c2(3030,"Beltrano",2.00);
  
  c1.imprime();
  c2.imprime();

  c2.depositar(200);
  c2.imprime();
  cout << c2.sacar(50) << endl;
  c2.imprime();



}