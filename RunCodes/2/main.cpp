#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>

using namespace std;
/*
 2) Escreva um programa que leia uyma string e gere outra com o conteudo da primeira invertido
*/



int main() {


  string primeira;
  cin >> primeira;
 
  cout << endl;

  for (int i = primeira.length(); primeira.length() >= i; i--){

    cout << primeira[i];


  }

  

}