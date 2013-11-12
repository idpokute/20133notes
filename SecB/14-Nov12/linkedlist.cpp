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
  void LinkedList::add(int data){
    Node* NN = new Node(data, _tail);
    if(!isEmpty()){
      _tail->_next = NN;
      // NN->_prev->_next = NN; crazy version of the prev line
      _tail = NN;
      // _tail = _tail->_next; same as previous
    }
    else{
      _tail = _head = NN;
    }
  }
  int LinkedList::remove(){
    int ret = _head->_data;
    //auto toRem = _head;
    Node* toRem = _head;
    _head = _head->_next;
    if(_head){  // not empty
      _head->_prev = NullNptr;
    }
    else{
      _tail = NullNptr;
    }
    delete toRem;
    return ret;
  }
  bool LinkedList::isEmpty(){
    return !_head;
  }

















}