#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream fin("output.txt");
  char str[100];
  fin>>str;
  cout<<str<<endl;
  fin>>str;
  cout<<str<<endl;
  fin>>str;
  cout<<str<<endl;
  fin>>str;
  cout<<str<<endl;
  return 0;
}