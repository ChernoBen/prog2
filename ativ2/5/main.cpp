//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;

void  distancia(int xa,int xb,int ya,int yb){
  double x = pow((xb - xa),2);
  double y = pow((xb - xa),2);
  double result = sqrt(x+y);
  cout << result;

};
struct PONTOS{
  int xa;
  int xb;
  int ya;
  int yb;

};


int main() {
  PONTOS pontos;
  cin >> pontos.xa;
  cin >> pontos.xb;
  cin >> pontos.ya;
  cin >> pontos.yb;
   
  distancia( pontos.xa,  pontos.xb,  pontos.ya,  pontos.yb);
  
  
  




}