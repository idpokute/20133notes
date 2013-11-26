#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream fin("output.txt");
  char str[100];
  fin.getline(str, 99, '\n');
  cout<<str<<endl;
  return 0;
}