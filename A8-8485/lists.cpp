#include <iostream>
#include "node.hpp"

using namespace std;


int main ()
{
  	Node<char> *p,*q,*r;
  	// Link the nodes with each other
  	q = new Node<char>('B'); // by default: ptrnxt = NULL
  	p = new Node<char>('A',q); // ptrnext = q
  	r = new Node<char>('C');

  	q->Add(r);
  	
	
  	cout << "p:" << p->data << endl;                 // expected output "A" 
 	cout << "p_next:" << p->NextNode()->data << endl;  // expected output "B" 
 	cout << "q:" << q->data << endl;                 // expected output "B"
 	cout << "q_next:" << q->NextNode()->data << endl;  // expected output "C" 
  	cout << "r:" << r->data << endl;                 // expected output "C" 
  	//cout << "r_next: " << r->NextNode()->data << endl;
	

  	p = p->NextNode(); 	// p now points to the node coming after the node it was
                    	 // previously pointing to.
  	cout << endl;
  	cout << "p:" << p->data << endl;                 // expected output "B"

	cout << "\n" << "\n";
	
	
	// demonstration of the correct use of templates
	
	Node<int> *d,*m,*y;
  	// Link the nodes with each other
  	m = new Node<int>(12); // by default: ptrnxt = NULL
  	d = new Node<int>(9,m); // ptrnext = q
  	y = new Node<int>(15);

  	m->Add(y);
  	
	
  	cout << "d:" << d->data << endl;                 // expected output "9" 
 	cout << "d_next:" << d->NextNode()->data << endl;  // expected output "12" 
 	cout << "m:" << m->data << endl;                 // expected output "12"
 	cout << "m_next:" << m->NextNode()->data << endl;  // expected output "15" 
  	cout << "y:" << y->data << endl;                 // expected output "15" 
  	//cout << "y_next: " << y->NextNode()->data << endl;
	

  	d = d->NextNode(); 	// d now points to the node coming after the node it was
                    	 // previously pointing to.
  	cout << endl;
  	cout << "d:" << d->data << endl;                 // expected output "12" 
	
	
}
