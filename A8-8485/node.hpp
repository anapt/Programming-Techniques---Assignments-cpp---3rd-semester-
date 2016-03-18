#ifndef NODE_HPP_INCLUDED
#define NODE_HPP_INCLUDED

#include <iostream>

using namespace std;

template<class T>
class Node
{
	private:
        Node<T> * next;

    public:
    	T data;
    	//default constructor
        Node() {
        	data = rand() % 1000;
		}
        Node(const T& item, Node<T>* pnxt = NULL);

        Node<T>* NextNode();

        Node<T>* Add(Node<T>* p);

};


//  constructor
template<class T>
Node<T>::Node(const T& item,Node<T>* pnxt)
{
    this->data = item;
    this->next = pnxt;
}


template<class T>
Node<T>*Node<T>::NextNode()
{
	if (next == nullptr){
		cout << "Null pointer.";
		exit (1);
	}else{
		return this->next;
	}
}


//  This methods inserts a node just after the node that the method belongs to
template<class T>
Node<T>* Node<T>::Add(Node<T> *p)
{

  	p->next = this->next;
  	this->next = p;

}

#endif // NODE_HPP_INCLUDED
