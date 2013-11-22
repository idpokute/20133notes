#include <iostream>
#include <cstring>
using namespace std;
class MyExp{
  char 
    message[256];
public:
  MyExp(const char *Message = ""){
    strncpy(message, Message, 256);
    message[255] = 0;
  }
  ostream &print(ostream &os){
    return os<<message;
  }
};
class BadNum:public MyExp{
public:
  BadNum(const char* m):MyExp(m){
  }
};

class BadInt:public BadNum{
public:
  BadInt(const char* m):BadNum(m){
  }
};
class BadMark:public BadInt{
public:
  BadMark(const char *m=""):BadInt(m){
  }
};

int GetInt(){
  int val ;
  char nl = 0;
  cin>>val;
  cin.get(nl);
  if(nl != '\n'){
    cin.clear();
    cin.ignore(100,'\n');
    throw BadInt("221120131321: Bad Integer number");
  }
  return val;
}

int Getmark(){
  int mark = GetInt();
  if(mark<0 || mark >100){
    throw BadMark("221120131322: Bad mark entered");
  }
  return mark;
}


int main(void){
  int 
    mark;
  bool 
    ok = false;
  while(!ok){
    try{
      cout<<"Please enter student mark:";
      mark = Getmark();    
      //OpenDB();
      //InserMark(mark);
      //CloseDB();
      ok = true;
    }
    catch(BadMark bm){
      cout<<bm<<endl<<"Only values between 0 and 100 acceptable: ";
    }
    catch(BadInt bi){
      cout<<bi<<endl<<"Onlly integer numbers acceptable:";
    }
    //catch(DBOpenExp e){
    //}
    //catch(DBInsertExp e){
    //}
    //catch(DBCloseExp e){sa
    //}
    //catch(MyExp e){
    //}
  }
  return 0;
}