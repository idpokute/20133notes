#include <iostream>
using namespace std;
class Money{
  double _value;
public:
  Money(double value){
    _value = value;
    cout<<"making money with "<<_value<<"!!!"<<endl;
  }
  Money(const Money& M){
    _value = M.getVal();
    cout<<"copying money with "<<_value<<"!!!"<<endl;
  }
  virtual ~Money(){
    cout<<"money with value "<<_value<<" is gone!"<<endl;
  }
  double getVal()const{
    return _value;
  }
  Money& operator+=(const Money& M){
    _value += M.getVal();
    return *this;
  }
  operator double(){
    return _value;
  }
};
ostream& operator<<(ostream& os, const Money& M){
  return os<<M.getVal();
}

class Account{
  Money _balance;
public:
  Account(Money balance):_balance(balance){
  }
  Money getBal()const{
    return _balance;
  }
  operator double()const{
    return _balance.getVal();
  }
};
int main(){
  Money m1(1234.45);
//  Money m1 = 1234.45;  same as above
  cout<<"-------------"<<endl;
  Account acc1(m1);
  cout<<"-------------"<<endl;
  Account acc2(Money(500));
  cout<<"-------------"<<endl;
  Account acc3(600.00);
  cout<<"-------------"<<endl;
  //operator<< is used
  cout<<"m1 has the value: "<<m1<<endl;
  //double cast overload of acc3 is used:
  cout<<"acc3 has the balance of "<<acc1<<endl;
  return 0;
}