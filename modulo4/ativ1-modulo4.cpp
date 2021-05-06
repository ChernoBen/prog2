#include <string>

using namespace std;

template<typename A>
class Pair {
  public:
    Pair(const A& t, const A& u):first(t), second(u){}
    A& get_first() { return first; }
    A& get_second() { return second; }
    const A& get_first() const { return first; }
    const A& get_second() const { return second; }
    void add_pairs(){cout<< first + second<<endl;}
  private:
    A first;
    A second;
};

template<typename D>
void print_pair(const D& p)
{
std::cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}


template<typename F>
F maximum(const F &v1,const F &v2){
  if(less<F>()(v1,v2)) return v2;
  if (less<F>()(v2,v1))return v1;
  return 0;
}


int main(){

  // 1) 
  string str1 = "1";
  string str2 = "20";

  cout<<maximum(10,11)<<endl;

  // 2)
  Pair<int>teste1(1,2);
  Pair<string>teste2(str1,str2);

  //teste1
  print_pair(teste1);
  teste1.add_pairs();

  //teste2
  teste2.add_pairs();
  print_pair(teste2);

}
