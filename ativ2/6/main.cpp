//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;

void  area(double altura ,double largura){
  
  double result = largura + altura;
  cout << result;

};

struct RETANGULO{

  double altura;
  double largura;
  
};


int main() {

  RETANGULO retangulo;
  cin >> retangulo.altura;
  cin >> retangulo.largura;
 
  area( retangulo.altura,  retangulo.altura);

  
  




}