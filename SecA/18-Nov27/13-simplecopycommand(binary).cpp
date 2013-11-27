#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[]){
  fstream fin(argv[1], ios::in | ios::binary);
  fstream fout(argv[2], ios::out | ios::binary);
  char ch;
  while(!fin.fail()){
    ch = fin.get();
    if(!fin.fail()){
      fout.put(ch);
    }
  }
  return 0;
}