#include <iostream>
#include "linkedlist.h"
using namespace std;
using namespace oop344;

int main(){
  LinkedList<int> L;
  int i;
  for(i=10;i<100;i+=10){
    L.add(i);
  }
  while(!L.isEmpty()){
    cout<<L.remove()<<endl;
  }
  for(i=10;i<50;i+=10){
    L.add(i);
  }
  return 0;
}