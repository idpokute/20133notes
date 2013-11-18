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
    cout<<"Removing money holding "<<_value<<endl;
  }
  double getVal()const{
    return _value;
  }
};
class Account{
  Money _balance;
public:
  Account(Money balance):_balance(balance){


  }
  Money getBal()const{
    return _balance;
  }
};
 int main(){
 // Account Acc(Money(234.56));
  Account Acc(234.56);
  cout<<"here I am...."<<endl;
  return 0;
}















