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
    virtual void setSalario(double salario){this->salario = salario;}
    void setCodigoFuncional(int codigoFuncional){this->codigoFuncional = codigoFuncional;}

    string getNome(){return this->nome;}
    virtual double getSalario(){return this->salario;}
    int getCodigoFuncional(){return this->codigoFuncional;}

};

class FuncionarioBasico : public Funcionario{
  protected:
    string escola;

  public:
    FuncionarioBasico(string nome,int codigoFuncional,double salario,string escola):Funcionario(nome,codigoFuncional,salario),escola(escola){};
    
    void setEscola(string escola){this->escola = escola;}
    string getEscola(){return this->escola;}
    void setSalario(double salario)override{this->salario = salario + ((10*salario)/100);}
};

class FuncionarioMedio : public FuncionarioBasico{

  protected:
    string colegio;

  public:
    FuncionarioMedio(string nome,int codigoFuncional,double salario,string escola,string colegio):FuncionarioBasico(nome,codigoFuncional,salario,escola),colegio(colegio){};

    void setColegio(string colegio){this->colegio = colegio;}
    string getColegio(){return this->colegio;}
    void setSalario(double salario)override{this->salario = salario + (salario/2);}
};

class FuncionarioSuperior:public FuncionarioMedio{
  protected:
    string universidade;

  public:
    FuncionarioSuperior(string nome,int codigoFuncional,double salario,string escola,string colegio,string universidade):FuncionarioMedio(nome,codigoFuncional,salario,escola,colegio),universidade(universidade){};

    void setUniversidade(string universidade){this->universidade = universidade;}
    string getUniversidade(){return this->universidade;}
    void setSalario(double salario)override{this->salario = salario + (salario * 2);}
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
  double total;
  FuncionarioBasico f1 ("joao",1,1000,"Escola Joao");
  FuncionarioBasico f2 ("jordan",2,1000,"Escola Joaquin");
  FuncionarioBasico f3 ("joana",3,1000,"Escola Jordan");
  FuncionarioBasico f4 ("Jupter",4,1000,"Escola Jonas");
  
  FuncionarioMedio f5 ("Carlos",5,1500,"Escola Jonas","Colegio 1");
  FuncionarioMedio f6 ("Caroline",6,1500,"Escola Jonas","Colegio 2");
  FuncionarioMedio f7 ("Caio",7,1500,"Escola Jonas","Colegio 3");
  FuncionarioMedio f8 ("Claudio",8,1500,"Escola Jonas","Colegio 4");

  FuncionarioSuperior f9 ("Naruto",9,2000,"Escola Jonas","Colegio 4","Universidade 1");
  FuncionarioSuperior f10 ("Goku",10,2000,"Escola Jonas","Colegio 4","Universidade 2");

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
    total += f->getSalario();  
  }
  cout << "Total: "<< total<<endl;
  cout <<" Nivel Basico: "<< (total * 0.4)/100<<"%"<< endl<< " Nivel Medio: "<< (total * 0.4)/100<<"%"<<endl<<" Nivel Superior: "<<(total * 0.2)/100<<"%";
  
}