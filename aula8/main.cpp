#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
Considere a implementa¸c˜ao de uma classe base chamada P roduto, contendo apenas os atributos de
pre¸co e nome do produto. Considere uma segunda classe chamada ComboP roduto que contenha
os atributos totalV alor e quantidadeItens. Crie uma fun¸c˜ao amiga chamada combinarP rodutos
que, recebendo como parˆametro dois objetos da classe P roduto, dˆe como retorno um objeto da
classe ComboP roduto, cujo atributo totalV alor contenha a soma dos valores dos dois produtos,
descontados 15% e atribua 2 a quantidadeItens.
*/

class Produto{
  private:
    double preco;
    string nome;

  public:
    Produto(double preco,string nome):preco(preco),nome(nome){};
    double getPreco(){return preco;}
    string getNome(){return nome;}

};

class ComboProduto : Produto{
  private:
    double totalValor;
    int quantidadeItens;
  
  public:
    ComboProduto(double totalValor,int quantidadeItens,double preco, string nome):Produto(preco,nome),totalValor(totalValor),quantidadeItens(quantidadeItens){};

    friend Produto combinarProdutos(Produto &p1, Produto &p2);
};

Produto CombinarProduto(Produto &p1, Produto &p2){
  double totalValor = p1.getPreco() +  p2.getPreco();
  double desconto = totalValor - (totalValor * 0.15);
  string produtos = p1.getNome() + p2.getNome();
  Produto combo(desconto,produtos);
  return combo;
  
};

int main() {

  Produto p1(500," Prod1 ");
  Produto p2(500," Prod2 ");
  Produto combo = CombinarProduto(p1,p2);
  cout<<endl<<combo.getNome()<<endl<<combo.getPreco()<<endl;

}
