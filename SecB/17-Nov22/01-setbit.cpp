#include <cstdio>
using namespace std;

//write a function that sets the "n"th
// bit of an unsigned integer to one, or zero

//unsigned int set1(unsigned int val, int n, bool bit);
//void set2(unsigned int* val, int n, bool bit);
void set3(unsigned int& val, int n, bool setToOne){
  unsigned int mask = setToOne? 1<<(n-1):~(1<<(n-1));
  if(setToOne){
    val = val | mask;
  }
  else{
    val = val & mask;
  }
}

// create a function that copies the bit pattern of 
// a character, into an intger, starting from "n"th 
// bit
// so the firt bit of the character is copied on 
// "n"th bit of the integer and the 8th bit of the
// character is copied onto "n+8"th bit of the integer

int main(){
  unsigned int A = 0xF0F0;
  // set the third bit of A to 1 
  //A = set1(A, 3, true);
  //set2(&A, 3, true);
  set3(A, 3, true);
  // set the fifth bit of A to 0
  //A = set1(A, 5, false);
  //set2(&A, 5, false);
  set3(A, 5, false);

  return 0;
}