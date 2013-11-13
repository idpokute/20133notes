#ifndef __344_LINKEDLIST_
#define __344_LINKEDLIST_
/*
1 - add the template command to every and each scope
    "template <class T>"
2 - replace all reletive type in the template scope to "T"
3 - add the sign. of template ("<T>") to every and each class reletive to the template 
   exp: (do not add to the following)
      1 - the class name right after template command
      2 - Constructor names
      3 - Distructor names
4 - Move all the code to the header file (templates can't exist in cpp files)
5 - document all the special needs for the templated type.
*/

namespace oop344{

  class LinkedList;
  template <class T>
  class Node{
    Node<T>* _next;
    Node<T>* _prev;
    T _data;
    Node(T data, 
      Node<T>* prev, Node<T>* next);
    virtual ~Node();
    friend class LinkedList<T>;
  };

  class LinkedList{
    Node* _head;
    Node* _tail;
  public:
    LinkedList();
    virtual ~LinkedList();
    int remove();
    void add(int);
    bool isEmpty();
  };
}
#endif