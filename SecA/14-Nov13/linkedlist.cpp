#include "linkedlist.h"
namespace oop344{
  Node::Node(int data, 
    Node* prev, Node* next){
    _data = data;
    _prev = prev;
    _next = next;
  }
 
  Node::~Node(){
  }
  
  template <class T>
  LinkedList<T>::LinkedList(){
    _head = _tail = (Node*)0 ;
  }
   
 
  LinkedList::~LinkedList(){
    Node* toDel;
    while(toDel = _head ){
      _head = _head->_next;
      delete toDel;
    }
  }
   
 
  void LinkedList::add(int data){
    Node* NN = new Node(data, _tail, (Node*)0);
    if(!isEmpty()){
      _tail->_next = NN;
      _tail = NN;
    }
    else{
      _head = _tail = NN;
    }
  }

 
 
  int LinkedList::remove(){
    int ret = _head->_data;
    Node* toRem = _head;
    _head = _head->_next;
    if(!isEmpty()){
      _head->_prev = (Node*)0;
    }
    else{
      _tail = (Node*)0;
    }
    delete toRem;
    return ret;
  }

 
  bool LinkedList::isEmpty(){
    return !_head;
  }
}
