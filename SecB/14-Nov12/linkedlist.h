    #ifndef __344_LINKEDLIST_
#define __344_LINKEDLIST_

namespace oop344{
  template <class T>   
  class LinkedList;
   
  template <class T>
  class Node{ //dont add signature becuase it comes right after the template
    Node<T>* _next;
    Node<T>* _prev;
    T _data;
    Node(T data, Node<T>* prev, Node<T>* next=(Node<T>*)0);
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
    void add(T);
    void push(T);
    T remove();
    T pop();
    T& operator[](int index); // if index is passed the size of the list
                              // make nodes with default data to accomodate it ...
                              // hense T needs to be able to be defaulted
    bool isEmpty();
  };
  template <class T>
  Node<T>::Node(T data, Node<T>* prev, Node<T>* next):_data(data){
    _prev = prev;
    _next = next;
  }
  template <class T>
  Node<T>::~Node(){
  }
  template <class T>
  LinkedList<T>::LinkedList(){
    _head = _tail = (Node<T>*)0;
  }
   
  template <class T>
  LinkedList<T>::~LinkedList(){
    Node<T>* toDel;
    while(toDel = _head){            //While toDel is equal to _head
      _head = _head -> _next;        //Make head point to the next
      delete toDel;                //Delete the toDel
    }
  }
   
  template <class T>
  void LinkedList<T>::add(T data){
    Node<T>* NN = new Node<T>(data, _tail);    //Create a NN(NewNode) to start at the tail
    if (!isEmpty()) {
      _tail->_next = NN;                    //Then point the tail to _next which now equals NN
      //You can also do "NN->_prev->_next = NN" crazy version of above
      _tail = NN; //OR _tail = _tail -> _next;
    }
    else {
      _tail = _head = NN;
    }
  }

  template <class T>
  void LinkedList<T>::push(T data){
    Node<T>* NN = new Node<T>(data, (Node<T>*)0, _head);
    if(isEmpty()){
      _head = _tail = NN;
    }
    else{
      _head->_prev = NN;
      _head = NN;
    }
  }

  template <class T>
  T LinkedList<T>::pop(){
    return remove();
  }
  template <class T>
  T& LinkedList<T>::operator[](int index){
    return _head->_data;
  }
  template <class T>
  T LinkedList<T>::remove(){
    T ret(_head->_data);
    //auto toRem = _head; do this on test, not in a program, it automatically chooses Node*
    Node<T>* toRem = _head;
    _head = _head->_next;
    if(_head){                    //Not Empty
      _head->_prev = (Node<T>*)0; //Obsolete if head is equal to null
    }
    else {
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