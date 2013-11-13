#ifndef __344_LINKEDLIST_
#define __344_LINKEDLIST_

namespace oop344{
    
  class LinkedList;
   
 
  class Node{
    Node* _next;
    Node* _prev;
    int _data;
    Node(int data, Node* prev, Node* next);
    virtual ~Node();
    friend class LinkedList;
  };
   
 
  class LinkedList{
    Node* _head;
    Node* _tail;
  public:
    LinkedList();
    virtual ~LinkedList();
    int remove();
    int pop();
    bool isEmpty();
  };
}
#endif