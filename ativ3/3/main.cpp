//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;



class Empregado{
  public:
    string nome;
    double salario;
    
    void mostraDados(){
      cout << nome;
      cout << endl;
      cout << salario;
    };
    void aumento(double porcentagem){

      this->salario = this->salario + ((this->salario * porcentagem)/100);

    };


};


int main() {

  double aumento;
  Empregado cativo;
  cout << "Insira nome"<< endl;
  cin >> cativo.nome;
  cout << "insira salario" << endl;
  cin >> cativo.salario;
  cout << "insira aumento %" ;
  cin >> aumento;

  cativo.aumento(aumento);
  cativo.mostraDados();


}