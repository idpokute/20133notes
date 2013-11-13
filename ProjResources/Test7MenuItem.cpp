// Console Input Output Library Tester program for CDialog and CMenuItem
// Test7MenuItem.cpp
//
// Fardad Soleimanloo, Chris Szalwinski
// Nov 12 2013
// Version 0.91



#include "cio.h"

using namespace cio;

int main() {
  int insert = 1;
  int key;
  int i=0;
  bool done = false;
  char si[] = "Selected Index:  ";
  CDialog Screen;
  CDialog FD(&Screen,5, 5, 35, 9, true);
  CMenuItem m1(false, "()", "One", 2, 2, 7);
  CMenuItem m2(true, "()", "Two", 3, 2, 7);
  CMenuItem m3(false, "()", "Three", 4, 2, 7); // three must be truncated to "Thre"
  CMenuItem* m[3]={&m1, &m2, &m3};
  for(int k=3;k<console.getRows();k+=2){
    for(int m=0;m<console.getCols()-10;m+=10){
      Screen<<new CLabel((i=!i)?"Hello": "Hi",k, m, 9);
    }
  }
  Screen<<new CLabel(">>>>>> Dialog and CheckMark Tester <<<<<<<<", 0, (console.getCols()-44)/2);
  Screen<< new CLabel("Esc: EXIT, Enter/Space: s F6:  move,", 1, 0);
  Screen.draw();
  FD<<m1<<m2<<m3<<new CLabel(5,2, 20);
  FD.draw();
  while(!done){
    key = FD.edit();
    switch(key){
      case ESCAPE:
        done = true;
        break;
      case F(6):
        FD.move();
        break;
      case ENTER:
      case SPACE:
        for(int i=0;i<3;i++){
          if(&FD.curField() == m[i]){
            si[16] = '0' + i; 
            FD[3].set(si);
          }
          else{
            m[i]->selected(false);
          }
        }
        break;
    }
  }
  return 0;
}

