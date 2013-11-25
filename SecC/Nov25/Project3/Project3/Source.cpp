#include <iostream>
void doStuff(int a)
   {
   if(a < 0)
      throw(a);
   }

void otherStuff(int a)
   {
   try{
      doStuff(a);
      }
   catch(int r)
      {
      std::cout << "A error was throw, value was: " << r << std::endl;
      }
   }

int main()
   {
   otherStuff(-1);

   return 0;
   }