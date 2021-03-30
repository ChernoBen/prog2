#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario{
protected:
	string nome;
	int codigoFuncional;
	double salario = 1000;
	
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
protected:
	string escola;

public:
	FuncionarioBasico(string escola):Funcionario("nome",1,1500),escola(escola){};
	
	void setEscola(string escola){this->escola = escola;}
	string getEscola(){return this->escola;}

};

class FuncionarioMedio : public FuncionarioBasico{

protected:
	string colegio;

public:
	FuncionarioMedio(string colegio):FuncionarioBasico("escola"),colegio(colegio){};

	void setColegio(string colegio){this->colegio;}
	string getColegio(){return this->colegio;}
};

class FuncionarioSuperior:public FuncionarioMedio{
protected:
	string universidade;

public:
	FuncionarioSuperior(string universidade):FuncionarioMedio("colegio"),universidade(universidade){};

	void setUniversidade(string universidade){this->universidade = universidade;}
	string getUniversidade(){return this->universidade;}
};

	




int main() {
  
}