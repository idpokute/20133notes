#include <iostream>
using namespace std;

class A{
private:
  int _data;
public: 
  A(int data = -1):_data(data){  // defaults the A with -1
  }
  virtual int print(){
    cout<<"A: "<<_data<<endl;
    return _data;
  }
};
class B: public A{
private:
  int data;
public: 
  B(int data){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"B: "<<data<<endl;
    return data;
  }
};

int main(){
  B b(30);
  A* ap = &b;
  A& ar = b;
  b.print();
  cout<<"----------------------"<<endl;
  ap->print();
  cout<<"----------------------"<<endl;
  ar.print();
  cout<<"----------------------"<<endl;
  A(b).print();
  cout<<"----------------------"<<endl;
  return 0;
}