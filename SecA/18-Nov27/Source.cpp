#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream file("output.bin",ios::out|ios::binary);
  for(int i=1; i<1000000; i++){
    file.write((const char*)&i, sizeof(i));
  }
  //file.close(); if you don't the destructor will take care of it.
  fstream textfile("intoutput.txt",ios::out);
  for(int i=1; i<1000000; i++){
    textfile<<i<<",";
  }
  return 0;
}