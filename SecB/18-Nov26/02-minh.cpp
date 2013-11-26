#include <iostream>
using namespace std;
class A{
private:
  int _data;
public: 
  A(int data = -1){  // defaults the A with -1
    _data = data;
  }
  int print(){
    cout<<"A: "<<_data<<endl;
    return _data;
  }
};
class B: public A{
private:
  int _data;
public: 
  B(int data){
    _data = data;
  }
  int print(){
    A::print();
    cout<<"B: "<<_data<<endl;
    return _data;
  }
};
class C: public A{
private:
  int _data;
public: 
  C(int data):A(data/2){
    _data = data;
  }
  int print(){
    A::print();
    cout<<"C: "<<_data<<endl;
    return _data;
  }
};
int main(){
  B b(30);
  C c(40);
  b.print();
  c.print();
  cout<<"--------------"<<endl;
  b.A::print();
  c.A::print();
  A(b).print();
  A(c).print();
  return 0;
}