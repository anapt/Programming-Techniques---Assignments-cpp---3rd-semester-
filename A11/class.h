#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class catalog {

	public:

		string name;
		int* number;
		catalog();								//default constructor
		//~catalog(){}								//destructor
		catalog(string na, int nu);			//secong constructor

};

catalog::catalog()
{
	cout << "Default constructor called. \nObject created. \n" ;
}

catalog::catalog(string na, int nu)
{
	name = na;
	number = new int;
	*number = nu;

}

#endif // CLASS_H_INCLUDED
