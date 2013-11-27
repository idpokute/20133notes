#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[]){
  ifstream fin(argv[1]);
  ofstream fout(argv[2]);
  char ch;
  while(!fin.fail()){
    ch = fin.get();
    if(!fin.fail()){
      fout.put(ch);
    }
  }
  return 0;
}