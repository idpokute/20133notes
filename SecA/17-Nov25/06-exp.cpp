#include <iostream>
using namespace std;
void foo(int i){
  static double d = 2.2;
  if(i%2 == 0){
    if(i%3 == 0){
      throw "what ever";
    }
    if(i%4 == 0){
      cout<<"everything ok"<<endl;
      return;
    }
    throw i;
  }
  else{
    d += 2;
    throw d;
  }
}
void faa(void){
  int 
    i=10;
  while(i--){
    try{
      foo(i);
      cout<<"No exception"<<endl;
    }
    catch(int a){
      cout<<"integer "<<a<<" is here"<<endl;
    }
    catch(double b){
      cout<<"double "<<b<<" is here "<<endl;
    }
    cout<<"something here"<<endl;
  }
}

int main(void){
  try{
    faa();
  }
  catch(char *s){
    cout<<s<<endl;
  }

  return 0;
}