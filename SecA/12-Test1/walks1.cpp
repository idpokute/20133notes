#include <iostream>
#include <cstdarg>
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
using namespace std;
#define V2
#define mul(a, b) (a*b)
#define CrtSet(v, t, c)  t v = c
int a[3][6] = {{10, 20, 30, 40, 50, 60},
               {70, 80, 90, 100, 110, 120}, 
               {130, 140, 150, 160, 170, 180}};
void w1(int n, char* args[]){
  cout<<"W1:"<<endl
      <<n<<endl
      <<args[2]<<endl
      <<a[args[2][0]-'0'][args[2][1]-'0']<<endl;
}
void w2(){
  int* p = a[0]+3;
  cout<<"W2:"<<endl
      <<p[0]<<endl
      <<*(p+2)<<endl
      <<p[10]<<endl;
}
void w3(){
  CrtSet(x, int, 4);
  CrtSet(y, int, 5);
  CrtSet(z, int ,6);
  cout<<"W3:"<<endl;
#ifdef V1
  x = mul(x+4, y);
#endif
#ifdef V2
  x = mul(x, y+4);
#endif
  cout<<x<<endl;
}
void w4(void* p){
  int (*ar)[3] = (int(*)[3])p;
  cout<<"W4:"<<endl<<ar[2][2]<<endl;
}
int w5(int a, int b = 1, int c = 2){
  cout<<"W5:"<<endl;
  return a+b+c;
}
int& w6f(){
  static int x = 5;
  x++;
  return x;
}
void w6(){
  cout<<"w6:"<<endl;
  for(int i=0;i<5;i++){
    cout<<w6f()++<<" ";
  }
  cout<<endl;
}
void w7(const char* s, ...){
  va_list vl;
  va_start(vl, s);
  int a;
  int i=0;
  cout<<"w7:"<<endl;
  while(a = va_arg(vl, int)){
    cout<<char(s[i++]+a);
  }
  cout<<"!"<<endl;
  va_end(vl);
}
int main(int argc, char* argv[]){
  w1(argc, argv);   // 3 marks
  w2();   // 3 marks
  w3();   // 2 marks
  w4(a);  // 1 mark
  cout<<w5(30, 40)<<endl; // 1 mark
  w6(); // 2 marks
  w7("Walking",-4,19,3,5,0); // 3 marks
  return 0;
}

/* output:
W1:
3
21
140
W2:
40
60
140
W3:
24
W4:
90
W5:
72
w6:
6 8 10 12 14
w7:
Stop!
*/