#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario{
protected:
	string nome;
	int codigoFuncional;
	double salario;
public:
	Funcionario(string nome, int codigoFuncional,double salario):nome(nome),codigoFuncional(codigoFuncional),salario(salario){};

	void setNome(string nome){this->nome = nome;}
	void setSalario(double salario){this->salario = salario;}
	void setCodigoFuncional(int codigoFuncional){this->codigoFuncional = codigoFuncional;}

	string getNome(){return this->nome;}
	double getSalario(){return this->salario;}
	int getCodigoFuncional(){return this->codigoFuncional;}

};

class FuncionarioBasico : public Funcionario{
private:
	string escola;
public:
	FuncionarioBasico(string escola):Funcionario("nome",1,1500),escola(escola){
  };
	void imprimeDados(){
		cout<< this->escola<< this->nome<< this->codigoFuncional<< this->salario<<endl;
	}
};





int main() {
  
}