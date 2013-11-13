#include <string>
#include <iostream>

#define CLAMP(val, low, high) ((val) < (low) ? (low) : (val) > (high) ? (high) : (val))

enum Polarity
   {
   NEGATIVE,
   NEUTRAL,
   POSITIVE,
   STRANGE
   };

typedef unsigned int uint;

struct Exception
   {
   std::string msg;
   Exception() {}
   Exception(std::string m) {msg = "Unknown Error: " + m;}
   };

struct MinorException : public Exception
   {
   MinorException(std::string m) {msg = "Warning: " + m;}
   };

template <Polarity P>
class PolarityUnit
   {
   private:
      static uint count;
      uint id;
   protected:
      PolarityUnit() : id(++count) {}
      int processChar(char a);
   public:
   };


template <Polarity P>
uint PolarityUnit<P>::count = 0;

template <Polarity P>
int PolarityUnit<P>::processChar(char a)
   {
   int baseVal = static_cast<int>(CLAMP(a, 'a', 'z'));
   return baseVal + (P * id * 100) + (100 - 100 * P);
   }

template <>
int PolarityUnit<STRANGE>::processChar(char a)
   {
   int baseVal = static_cast<int>(CLAMP(a, 'a', 'z'));
   return id % 2 * baseVal * 3 + baseVal;
   }

template <class T = PolarityUnit<STRANGE>>
class Player : public T
   {
   private:
      uint strength, speed, wisdom, luck;
   protected:
   public:
      Player() : strength(0), speed(0), wisdom(0), luck(0) {}

      void processName(std::string a)
         {
         if(a.size() < 3)
            throw(MinorException("Names must be at least 3 characters long"));
         else if(a.size() > 8)
            throw(MinorException("Names cannot be greater than 12 characters long"));
         for(uint i = 0; i < a.size(); i++)
            {
            switch(i % 4)
               {
               case 0:
                  strength += processChar(a[i]);
                  break;
               case 1:
                  speed += processChar(a[i]);
                  break;
               case 2:
                  wisdom += processChar(a[i]);
                  break;
               case 3:
                  luck += processChar(a[i]);
                  break;
               }
            }
         }

      void printStats()
         {
         std::cout << "Player has " << strength << " strength, " << speed << " speed, " 
            << wisdom << " wisdom, " << luck << " luck." << std::endl;
         }
   };

int main(int argc, char* argv[])
   {
   bool active = true;
   int retVal = 0;
   std::cout << "Hello there";
   for(int i = 1; i < argc; i++)
      std::cout << " " << argv[i];
   std::cout << "!" << std::endl;
   for(int i = 1; i < argc && active; i++)
      {
      try
         {
         if(i%2)
            {
            Player<> player;
            player.processName(argv[i]);
            player.printStats();
            }
         else
            {
            Player<PolarityUnit<POSITIVE>> player;
            player.processName(argv[i]);
            player.printStats();
            }
         }
      catch(MinorException e)
         {
         std::cout << e.msg << std::endl;
         }
      catch(Exception e)
         {
         std::cout << e.msg << std::endl;
         active = false;
         retVal = 2;
         }
      }
   return retVal;
   }
