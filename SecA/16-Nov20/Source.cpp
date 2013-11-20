#include <cstdio>
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


int main(){
  return 0;
}