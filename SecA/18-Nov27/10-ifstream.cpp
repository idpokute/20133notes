#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream heehaw("output.txt");
  char str[100];
  heehaw>>str;
  cout<<str<<endl;
  heehaw>>str;
  cout<<str<<endl;
  heehaw>>str;
  cout<<str<<endl;
  heehaw>>str;
  cout<<str<<endl;
  heehaw>>str;
  cout<<str<<endl;
  return 0;
}