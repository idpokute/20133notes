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

//void prnBits(unsigned int val){
//  int i = sizeof(int)*8;
//  do{
//    cout<<isOn(val, i);
//  }while(--i);
//}
//void prnBits(unsigned int val){
//  for(int i=sizeof(int)*8;i--;cout<<bool(val & 1<<i));
//}
//void prnBits(unsigned int val){
//  for(int i=sizeof(int)*8;i--;cout<<(val & 1<<i)?1:0);
//}
void prnBits(unsigned int val){
  for(int i=sizeof(int)*8;i--;cout<<!!(val & 1<<i));
}
int main(){
  prnBits(0xf0f0f0f0);

  return 0;
}