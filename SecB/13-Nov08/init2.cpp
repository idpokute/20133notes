#include <iostream>
using namespace std;

class Foo{
  int& _data;
public:
  Foo(int& data):_data(data){}
  //Foo(int& data){ // can't do, cause _data has to get initialized
  //  _data = data;
  //}

  ostream& print(ostream& os)const{
    os<<"Base: "<<_data;
    return os;
  }
};

ostream& operator<<(ostream& os, const Foo &F){
  return F.print(os);
}

int main(){
  int i = 0;
  Foo F(i);
  cout<<F<<endl;
  i = 20;
  cout<<F<<endl;
  return 0;
}

