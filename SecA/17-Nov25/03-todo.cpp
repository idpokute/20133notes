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

/*write a function that copies bit pattern of a byte into an integer starting from specific bit number 
the int: 01001000010101001010100100101010
the byte: 11110000
specific bit number : 10
the outcome: 01001000010101011110000100101010
                            --------
*/  

int main(){
  int A = 0xF0;

  return 0;
}