//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;

class Lampada{
public:
  bool ligada;
  string tipo;
  int voltagem;
  int potencia;

  void ligar(){ligada=true;}
  void desligar(){ligada=false;}
  void status(){

    if(ligada){

      cout<< "ligada"<<endl;

    }else{

      cout<<"desligada"<<endl;
    }
  }

  int ehEconomica(){

    if (potencia < 40){
      
      return true;

    }else{

      return false;
    };
  }

};



int main() {
  
  Lampada lamp1,lamp2;
  cin >> lamp1.tipo;
  cin >> lamp1.potencia;
  cin >> lamp1.voltagem;

  // lamp1.ligar();
  // lamp1.status();
  // lamp1.desligar();
  // lamp1.status();
  cout << lamp1.ehEconomica();
  
  




}