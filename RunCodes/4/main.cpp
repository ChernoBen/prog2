//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>

using namespace std;




int main() {
  
  
  string frase;
  string f;
  getline(cin,frase);



  for(auto item: frase){
    if (!isspace(item)){
      f+=item;
      
    }
    
      
  }
  cout << f;




}