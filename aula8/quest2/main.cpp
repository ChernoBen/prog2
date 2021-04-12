#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
2. Crie uma classe abstrata FormaGeometrica que contenha um m´etodo puramente virtual chamado
calculaArea. Crie uma classe Retangulo derivada da classe acima que contenha os atributos para
os dois lados do retˆangulo.
a) O que acontece se a classe Retangulo n˜ao realizar a sobrescrita do m´etodo calculaArea? Por
que?
b) O que acontece se a classe Retangulo realizar a sobrescrita do m´etodo calculaArea sem
utilizar a palavra-chave override? Por que?
c) O que acontece se a classe Retangulo realizar a sobrescrita do m´etodo calculaArea, mas
dizendo que tal m´etodo ´e const? Por que?
Crie um m´etodo oi() na classe base, cuja implementa¸c˜ao ´e:
cout << "oi, sou uma forma geometrica<endl;.
Crie tamb´em o mesmo m´etodo na classe derivada, desta vez escrevendo: cout <<"oi, sou um
retangulo<endl;. Assumindo que nenhum dos dois m´etodos s˜ao virtuais, o que acontece se eu invocar o m´etodo oi() de um objeto Retangulo a partir de um ponteiro de um objeto FormaGeometrica?
Por que?
Permita que o m´etodo oi() possa ser invocado corretamente para um objeto Retangulo, mesmo a
partir de um ponteiro de FormaGeometrica
*/

class FormaGeomtrica{
  public:
    virtual double calculaArea(double base,double altura)=0;
    virtual void oi(){
      cout<< "oi, sou uma forma geometrica" << endl;
    }
};

class Retangulo: public FormaGeomtrica{
  private:
    double lado1;
    double lado2;

  public:
    Retangulo(double lado1,double lado2):lado1(lado1),lado2(lado2){};
    double getLado1(){return lado1;}
    double getLado2(){return lado2;}
    double calculaArea(double base, double altura)override{return base * altura;}
    void oi()override{
      cout<<"oi, sou um retangulo" << endl;
  }
    
};


int main() {
  //2 a) Se a classe retangulo não realizar a sobrescrita do metodo calcula área  classe retangulo herdará um metodo puramente virtual da classe pai, logo a classe retangulo será também uma classe abstrata, pois classes são abstratas quando possuem ao menos um metodo puramente virtual.
  
  //2 b) Se a palavra chave override não for utilizada na sobrescrita do metodo calculaArea entao esse metodo será um metodo da classe filha "retangulo".

  //2 c) O tipo de retorno da função sobrescrita é uma constante double e deve ser igual ao tipo de retorno da função da classe pai, caso não seja então ocorrera conflito.
  
  //2 d) O ponteiro só poderá invocar metodos da e atributos da classe pai(Forma geometrica), asolução para a impressão do metodo oi em retangulo é tornar o metodo oi da classe pai um metodo virtual e realizar o override na classe filha.
  
  Retangulo retangulo(10,15);
  FormaGeomtrica *forma;
  forma = &retangulo;
  forma->oi();
}
