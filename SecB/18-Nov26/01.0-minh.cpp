#include <iostream>
using namespace std;

class A{
private:
  int _data;
public: 
  A(int data = -1):_data(data){  // defaults the A with -1
  }
  int print(){
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
    cout<<"B: "<<this->data<<endl;
    return data;
  }
};

int main(){
  B b(30);
  b.print();
  cout<<"----------------------"<<endl;
  ((A)b).print();
  cout<<"----------------------"<<endl;
  A(b).print();
  cout<<"----------------------"<<endl;
  (A)b.print(); // print of b is called and then the return value of
                // b.print()is casted to an "A" (temprary nameless A created
                // and dies right after
  cout<<"----------------------"<<endl;
  b.A::print();
  return 0;
}