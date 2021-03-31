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
	virtual double getSalario(){return this->salario;}
	int getCodigoFuncional(){return this->codigoFuncional;}

};

class FuncionarioBasico : public Funcionario{
protected:
	string escola;

public:
	FuncionarioBasico(string escola):Funcionario("nome",1,1500),escola(escola){};
	
	void setEscola(string escola){this->escola = escola;}
	string getEscola(){return this->escola;}
	double getSalario()override{return this->getSalario()+((10 * this->getSalario())/100);}
};

class FuncionarioMedio : public FuncionarioBasico{

protected:
	string colegio;

public:
	FuncionarioMedio(string colegio):FuncionarioBasico("escola"),colegio(colegio){};

	void setColegio(string colegio){this->colegio = colegio;}
	string getColegio(){return this->colegio;}
	double getSalario()override{return this->getSalario()+(this->getSalario()/2);}
};

class FuncionarioSuperior:public FuncionarioMedio{
protected:
	string universidade;

public:
	FuncionarioSuperior(string universidade):FuncionarioMedio("colegio"),universidade(universidade){};

	void setUniversidade(string universidade){this->universidade = universidade;}
	string getUniversidade(){return this->universidade;}
	double getSalario()override{return this->getSalario()*2;}
};

/*
nome,
cod
salario
escola
colegio
universidade
*/

int main() {
  string funcionario [10] = {"pedro","tiago","joao","marcos","mateus","calos","alberto","felipe","daniel","aurelio"};

  FuncionarioBasico basico("Alda Scopel");
  basico.setSalario(basico.getSalario());
}