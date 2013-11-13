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
  template <class T>
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
  template <class T>
  class LinkedList{
    Node<T>* _head;
    Node<T>* _tail;
  public:
    LinkedList();
    virtual ~LinkedList();
    void push(T);
    T pop();
    T remove(); 
    void add(T);
    bool isEmpty();
  };
  template <class T>
  Node<T>::Node(T data, 
      Node<T>* prev, Node<T>* next){
    _data = data;
    _prev = prev;
    _next = next;
  }
 
  template <class T>
  Node<T>::~Node(){
  }
  
  template <class T>
  LinkedList<T>::LinkedList(){
    _head = _tail = (Node<T>*)0 ;
  }
   
 
  template <class T>
  LinkedList<T>::~LinkedList(){
    Node<T>* toDel;
    while(toDel = _head ){
      _head = _head->_next;
      delete toDel;
    }
  }
   
 
  template <class T>
  void LinkedList<T>::add(T data){
    Node<T>* NN = new Node<T>(data, _tail, (Node<T>*)0);
    if(!isEmpty()){
      _tail->_next = NN;
      _tail = NN;
    }
    else{
      _head = _tail = NN;
    }
  }

  template <class T>
  T LinkedList<T>::pop(){
    return remove();
  }
 
  template <class T>
  T LinkedList<T>::remove(){
    T ret = _head->_data;
    Node<T>* toRem = _head;
    _head = _head->_next;
    if(!isEmpty()){
      _head->_prev = (Node<T>*)0;
    }
    else{
      _tail = (Node<T>*)0;
    }
    delete toRem;
    return ret;
  }

 
  template <class T>
  bool LinkedList<T>::isEmpty(){
    return !_head;
  }
}
#endif