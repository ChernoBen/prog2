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
 string segunda;
 cin >> primeira;
 cout << endl;
 cin >> segunda;
 cout << endl;

  int p_contador = 0;
  int s_contador = 0;

  for(auto x : primeira){
  
    p_contador ++;
  
  }

  for(auto x : segunda){
  
    s_contador ++;
  
  }
  
 if(p_contador > s_contador){

   cout << primeira;

 }else if(p_contador < s_contador){

   cout << segunda;

 }else{

   cout << "iguais";
 }
 


}