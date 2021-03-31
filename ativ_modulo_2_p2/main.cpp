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
  vector <Funcionario*> vf;

  FuncionarioBasico f1 ("Escola Joao");
  FuncionarioBasico f2 ("Escola Joaquin");
  FuncionarioBasico f3 ("Escola Jordan");
  FuncionarioBasico f4 ("Escola Jonas");
  
  FuncionarioMedio f5 ("Colegio 1");
  FuncionarioMedio f6 ("Colegio 2");
  FuncionarioMedio f7 ("Colegio 3");
  FuncionarioMedio f8 ("Colegio 4");

  FuncionarioSuperior f9 ("Universidade 1");
  FuncionarioSuperior f10 ("Universidade 2");

  vf.push_back(&f1);
  vf.push_back(&f2);
  vf.push_back(&f3);
  vf.push_back(&f4);
  vf.push_back(&f5);
  vf.push_back(&f6);
  vf.push_back(&f7);
  vf.push_back(&f8);
  vf.push_back(&f9);
  vf.push_back(&f10);

  for (auto f : vf){
    /*
	adicionar estrutura condicional para avaliar tipo de funcionario
		definir valores de cada classe com setters
    */
  }
  
}