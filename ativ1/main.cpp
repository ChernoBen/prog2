#include <iostream>

using namespace std;
/*
Escreva um programa para ler dois numeros do teclado
e imprimir o maior entre else
int main() {
  int a,b;
  cin >> a;
  cin >> b;

  if(a>b){
    cout << a;
  }else if (b>a){
    cout << b;
  }else{
    cout << "iguais";
  }
  
}
*/

/*
imprima apenas os valores pares de um vetor
*/
int main(){
  int x[5];
  for (int i=0; i < 5; i++)
    cin >> x[i];
  /*
  for(int i=0; i<10; i++)
    if(x[i]%2==0)
      cout << x[i] << "";
  */
  for(auto y:x){
    if ( y % 2 == 0 ){
      cout << y << " " ;
    }
  }
}