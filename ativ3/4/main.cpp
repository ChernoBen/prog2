//vector::push_back
#include <iostream>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include <math.h>

using namespace std;


class Partida{
  public:
    string nome_mandante;
    int gols_mandante;
    int pontos_mandante;

    string nome_visitante;
    int gols_visitante;
    int pontos_visitante;

    void resultado(string home,int goalHome,string visitor,int goalVisitor){
      
      this-> nome_mandante = home;
      this-> gols_mandante = goalHome;
      this-> nome_visitante = visitor;
      this-> gols_visitante = goalVisitor;

    };
    
    void calculaPontos(){

      if (this->gols_mandante > this->gols_visitante){

        this->pontos_mandante  = 3; 
        this->pontos_visitante = 0;

      } else if (this->gols_mandante< this->gols_visitante){

        this->pontos_visitante = 3;
        this->pontos_mandante = 0;

      } else{

        this->pontos_mandante = 1;
        this->pontos_visitante = 1;

      }
    };

    void mostraResultado(){

      cout << this->nome_visitante <<" "<< this->gols_visitante<< " X " << this->nome_mandante <<" "<< this->gols_mandante << endl;
        
    };
    

};


int main() {

  string time1;
  string time2;
  int gol1;
  int gol2;

  cout << "insira home" << endl;
  cin >> time1;
  cout << "gols" << endl;
  cin >> gol1;

  cout << "insira visitante" << endl;
  cin >> time2;
  cout << "gols" << endl;
  cin >> gol2;
   
  Partida jogo1;
  jogo1.resultado(time1, gol1, time2, gol2);
  jogo1.calculaPontos();
  jogo1.mostraResultado();

  
  

}