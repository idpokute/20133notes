#ifndef __344_LINKEDLIST__
#define __344_LINKEDLIST__
namespace oop344{
  class LinkedList;

  class Node{
    Node* _next;
    Node* _prev;
    int _data;
    Node(int data, Node* prev, Node* next);
    friend class LinkedList;
  };


















}
#endif
