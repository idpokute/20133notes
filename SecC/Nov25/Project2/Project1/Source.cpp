class Animal
   {
   public:
      int numOfLimbs;
   public:
      Animal(int a) : numOfLimbs(a) {}
   };

template <class T = Animal>
class Reptile : public T
   {
   private:
      bool regen;
   public:
      Reptile(bool a, int l) : T(l), regen(a) {}
   };

template <class T = Animal>
class Flyer : public T
   {
   private:
      float wingSpan;
   public:
      Flyer(float a, int l) : T(l), wingSpan(a) {}
   };

class Dragon : public Reptile<Flyer<>>
   {
   private:
      bool breathFire;
   public:
      Dragon(bool fire, float wing, bool regen, int limb) :
         Reptile(regen, limb), breathFire(fire) {}
   };


int main()
   {
   Dragon a(true, 100.0f, false, 6);

   a.numOfLimbs = 10;

   void* va = &a;

   Flyer* vf = (Flyer*)va;
   Reptile* vr = (Reptile*)va;

   Flyer* ff = &a;
   Reptile* rr = &a;

   return 0;
   }