#include <iostream>
#include <cstdio>
using namespace std;

bool isOn(unsigned int val,unsigned int n){
  return bool(val & (1 << (n-1)));
}


void prnBits(unsigned int val){
  for(int i=sizeof(int)*8;i--;cout<<!!(val & 1<<i));
}
//const char* bits(unsigned int val){
//  static char bitstr[512];
//  int j = 0;
//  for(int i=sizeof(int)*8;i--;bitstr[j++] = !!(val & 1<<i)?'1':'0');
//  bitstr[j] = 0;
//  return bitstr;
//}

enum boolean{False, True};
const char* bits(unsigned int val){
  static char bitstr[512];
  int j = 0;
  for(int i=sizeof(int)*8;i--;bitstr[j++] = !!(val & 1<<i)+'0');
  bitstr[j] = 0;
  return bitstr;
}
int main(){
  
  unsigned int a = 0xf0f0f0f0;
  cout<<bits(a)<<endl;
  printf("%s\n", bits(a));
  return 0;
}