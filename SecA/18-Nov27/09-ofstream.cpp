#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream fout("output.txt");
  fout<<"Hello there!"<<endl<<"I just created a file"<<endl;
  return 0;
}