#include <iostream>
using namespace std;

class Base{
  int _data;
public:
  Base(int data){
    _data =data;
  }
  ostream& print(ostream& os)const{
    os<<"Base: "<<_data;
    return os;
  }
};

ostream& operator<<(ostream& os, const Base &B){
  return B.print(os);
}


class Derived:public Base{
  int _data;
public:
  Derived(int data):Base(data*2),_data(data){
  }
};

int main(){
  int i = 0;
  int j(10);
  int k;
  k = 0;   //no init, but setting
  return 0;
}

