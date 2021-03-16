//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;



class Triangulo{
  
  public:
  double base;
  double altura;

  void calculaArea(){

    cout << base * altura; 

  };

};
int main() {
  double base;
  double altura;
  cin >> base;
  cin >> altura;

  Triangulo poligono;
  poligono.base = base;
  poligono.altura = altura;
  poligono.calculaArea();




}