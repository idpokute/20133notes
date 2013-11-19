#include <iostream>
using namespace std;
//bool isOn(unsigned int val,unsigned int n){
//  unsigned int mask = 1 << (n-1);
//  bool ret = false;
//  if((val & mask) != 0){
//    ret = true;
//  }
//  return ret;
//}
//bool isOn(unsigned int val,unsigned int n){
//  unsigned int mask = 1 << (n-1);
//  return (val & mask) != 0;
//}
//bool isOn(unsigned int val,unsigned int n){
//  return (val & (1 << (n-1))) != 0;
//}
bool isOn(unsigned int val,unsigned int n){
  return bool(val & (1 << (n-1)));
}

void prnBits(unsigned int val){
}

int main(){
 

  return 0;
}