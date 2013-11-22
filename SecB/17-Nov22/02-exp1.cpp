#include <iostream>
using namespace std;
int main(void){
  int 
    i=4;
  double d = 2.2;
  while(i--){
    try{
      if(i%2 == 0){
        throw i;
      }
      else{
        d += 2;
        throw d;
      }
      cout<<"This will never happen"<<endl;
    }
    catch(int a){
      cout<<"integer "<<a<<" is here"<<endl;
    }
    catch(double b){
      cout<<"double "<<b<<" is here "<<endl;
    }
  }
  return 0;
}