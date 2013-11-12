#include "linkedlist.h"

namespace oop344{

  Node::Node(int data, Node* prev, Node* next){
    _data = data;
    _next = next;
    _prev = prev;
  }
    


  LinkedList::LinkedList(){
    _head = _tail = NullNptr;
  }
  LinkedList::~LinkedList(){
    Node* toDel;
    while(toDel = _head){
      _head = _head->_next;
      delete toDel;
    }
  }
  void LinkedList::add(int){
  }
  int LinkedList::remove(){
    return 0;
  }
  bool LinkedList::isEmpty(){
    return true;
  }

















}