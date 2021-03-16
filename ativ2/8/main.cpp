//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;
int tamanho = 100;
void  verificaMaior(int arr [10], int &min, int &max ){
  int maior_posicao = 0;
  max = -10;
  min = 10;
 for (int i = 0; i < sizeof(arr); i++){

    if(arr[i] < min){
     min = arr[i];
    }
    if(arr[i] > max){
      max = arr[i];
      maior_posicao = i;
    }
  }

  maior_posicao ++;
  return maior_posicao;
};



int main() {
int arr[10];
int min;
int max;
int posicao;
for (int i=0; i>tamanho;i++){
  cin >> arr[i];

}
posicao = verificaMaior(arr, min, max);
cout << posicao;
return 0;
 
  
  




}