#include <iostream>
using namespace std;

bool isOn(unsigned int val, unsigned int bitNo);
 // 4 is: 0000 0000 0000 0000 0000 0000 0000 0100
 // isOn(4, 3); returns true
 // ison(4, 4); returns false
//bool isOn(unsigned int val, unsigned int bitNo){
//  unsigned int m = 1 << (bitNo-1);
//  bool ret = false;
//  if(val & m){
//    ret = true;
//  }
//  return ret;
//}
//bool isOn(unsigned int val, unsigned int bitNo){
//  unsigned int m = 1 << (bitNo-1);
//  return (val & m) != 0;
//}
bool isOn(unsigned int val, unsigned int bitNo){
  return (val & 1 << (bitNo-1)) != 0;
}

//void prnBits(unsigned int val){
//  unsigned int i = sizeof(int)*8;
//  do{
//    cout<<isOn(val, i);
//  }while(--i);
//  cout<<endl;
//}
//void prnBits(unsigned int val){
//  for(unsigned int i = sizeof(int)*8; i--;cout<<bool(val & 1 << (i-1)));
//}
void prnBits(unsigned int val){
  for(unsigned int i = sizeof(int)*8; i--;cout<<!!(val & 1 << (i)));
}
//void prnBits(unsigned int val){
//  for(unsigned int i = sizeof(int)*8; i--;(val & 1 << (i-1))?'1':'0');
//}

int main(){
  prnBits(0xf0f0f0f0);
  // 11110000111100001111000011110000
  return 0;
}