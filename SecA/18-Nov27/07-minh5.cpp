#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class A{
private:
  int data;
public: 
  A(int data = -1){  // defaults the A with -1
    this->data = data;
  }
  int print(){
    cout<<"A: "<<data<<endl;
    return data;
  }
};
class B: virtual public A{
private:
  int data;
public: 
  B(int data):A(data/3){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"B: "<<data<<endl;
    return data;
  }
};
class C: virtual public A{
private:
  int data;
public: 
  C(int data = 10):A(data/2){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"C: "<<data<<endl;
    return data;
  }
};
class X: public A{
private:
  int data;
public: 
  X(int data = 100):A(data/2){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"X: "<<data<<endl;
    return data;
  }
};
class D:public B, public C, public X{
private:
  int data;
public: 
  D(int data):B(data/2){
    this->data = data;
  }
  int print(){
    B::print();
    C::print();
    X::print();
    cout<<"D: "<<data<<endl;
    return data;
  }
};
int main(){
  D d(60);
  d.print();
  cout<<"-----------------"<<endl;
  return 0;
}