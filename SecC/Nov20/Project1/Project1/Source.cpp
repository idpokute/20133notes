#include <vector>
#include <list>
#include <unordered_map>
#include <algorithm>

int main()
   {
   std::vector<int> intv;
   std::list<int> intl;
   std::unordered_map<int,int> intm;

   auto f = std::find(intv.begin(), intv.end(), 22);
   auto fl = std::find(intl.begin(), intl.end(), 10);

   if(f != intv.end())
      intv.erase(f);



   std::sort(intl.begin(), intl.end());

   

   for(auto i = intv.begin(), end = intv.end(); i < end; i++)
      {

      }

   
   for(auto i = intl.begin(), end = intl.end(); i != end; i++)
      {

      }

   }