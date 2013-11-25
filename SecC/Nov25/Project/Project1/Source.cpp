class Animal
   {
   public:
      int numOfLimbs;
   public:
      Animal(int a) : numOfLimbs(a) {}
   };

class Reptile : virtual public Animal
   {
   private:
      bool regen;
   public:
      Reptile(bool a, int l) : Animal(l), regen(a) {}
   };

class Flyer : virtual public Animal
   {
   private:
      float wingSpan;
   public:
      Flyer(float a, int l) : Animal(l), wingSpan(a) {}
   };

class Dragon : virtual public Reptile, virtual public Flyer
   {
   private:
      bool breathFire;
   public:
      Dragon(bool fire, float wing, bool regen, int limb) :
         Animal(limb), Reptile(regen, limb), Flyer(wing, limb), breathFire(fire) {}
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