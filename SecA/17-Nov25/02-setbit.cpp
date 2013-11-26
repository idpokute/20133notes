#include <iostream>
using namespace std;
void prnBits(unsigned int val){
  for(unsigned int i = sizeof(int)*8; i--;cout<<!!(val & 1 << (i)));
}
const char* bits(unsigned int val){
  static char str[512];
  int j = 0;
  for(unsigned int i = sizeof(int)*8; i--
          ;str[j++] = !!(val & 1 << i)+'0');
  str[j] = 0;
  return str;
}

int setbit1(int a, int n, bool bitval){
// A = setbit1(A, 10, true);
  return bitval? a | (1<<(n-1)) : a & ~(1<<(n-1));
}

void setbit2(int* a, int n, bool bitval){
// setbit2(&A, 10, true);
  *a = bitval? *a | (1<<(n-1)) : *a & ~(1<<(n-1));
}

void setbit3(int& a, int n, bool bitval){
// setbit3(A, 10, true);
  if(bitval){
    a = a | (1<<(n-1));
  }
  else{
    a = a & ~(1<<(n-1));
  }
}



int main(){
  int A = 0xF0;
  cout<<bits(A)<<endl;
  A = A | (1<<3);  // setting the 4th [mask:(1<<4-1)] bit to one
  cout<<bits(A)<<endl;
  A = A & ~(1<<6); // setting the 7th [mask: ~(1<<7-1)} bit to zero
  cout<<bits(A)<<endl;
  


  return 0;
}