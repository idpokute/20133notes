#include <iostream>
#include <cstdio>
using namespace std;


bool isOn(unsigned int val, unsigned int bitNo){
  return (val & 1 << (bitNo-1)) != 0;
}

const char* bits(unsigned int val){
  static char str[512];
  int j = 0;
  for(unsigned int i = sizeof(int)*8; i--
          ;str[j++] = !!(val & 1 << i)+'0');
  str[j] = 0;
  return str;
}



int main(){
  int val= 0xf0f0f0f0;
  cout<<bits(val)<<endl;
  printf("%s\n", bits(val));
  return 0;
}