#ifndef __344_LINKEDLIST__
#define __344_LINKEDLIST__
namespace oop344{
#ifdef NullNptr
#undef NullNptr
#endif
#define NullNptr ((Node*)0)

  class LinkedList;
  class Node{
    Node* _next;
    Node* _prev;
    int _data;
    Node(int data, Node* prev, Node* next=NullNptr);
    friend class LinkedList;
  };

  class LinkedList{
    Node* _head;
    Node* _tail;
  public:
    LinkedList();
    virtual ~LinkedList();
    void add(int);
    int remove();
    bool isEmpty();
  };
















}
#endif
