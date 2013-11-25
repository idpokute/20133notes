struct Node
   {
   int data;
   Node* a;
   Node* b;
   Node(int r) : data(r), a(0), b(0) {}
   };

class Tree
   {
   private:
      Node* root;
   public:
      Tree() : root(0) {}
      void push(int a)
         {
         findNew(root) = new Node(a);
         }

      Node*& findNew(Node*& a)
         {
         if(!a)
            return a;
         if(a->a)
            return findNew(a->b);
         else
            return findNew(a->a);
         }
   };


int addTen(int a)
   {
   return addTen(a) + 10;
   }

int main()
   {
   Tree a;
   int i = 100;
   while(i--)
      a.push(i);
   }