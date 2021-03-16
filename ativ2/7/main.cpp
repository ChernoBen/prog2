//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;

void  verificaEscaleno(double lado1 ,double lado2, double lado3){
  
  if (lado1 == lado2 && lado2 == lado3){

    cout << false;

  }else if (lado1 == lado2 || lado2 == lado3 || lado1 == lad){

    cout << false;

  }else{

    cout << true;
  }

};

struct TRIANGULO{

  double lado1;
  double lado2;
  double lado3;
  
};


int main() {

  TRIANGULO triangulo;
  cin >> triangulo.lado1;
  cin >> triangulo.lado2;
  cin >> triangulo.lado3;
 
  verificaEscaleno( triangulo.lado1,  triangulo.lado2, triangulo.lado3 );

  
  




}