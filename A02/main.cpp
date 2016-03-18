#include <iostream>
#include <complex>
#include "functions.hpp"

using namespace std;

int main()
{
	int choice, oper;
	double real1, imag1, real2, imag2;
	float n1, n2;
	struct complex1{
		double real, imag;
	}p1,p2;


	cout << "Please, type 1 for complex and 2 for real numbers \n";
	cin >> choice;
	cout << "Please, type 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division \n";
	cin >> oper;

	if (choice==2)
	{
		cout << "Please, type 2 numbers \n";
		cin >> n1 >> n2;

	}else if (choice==1)
	{
		cout << "Please, type the real and the imaginary part of the 1st number \n";

		cin >> p1.real >> p1.imag ;
		cout << "Please, type the real and the imaginary part of the 2nd number \n";

		cin >> p2.real >> p2.imag ;

	}

	if (oper==1)
	{
		if (choice==2)
		{
			float result=add(n1,n2);
			cout << result;
		}else{
			complex<double> result=add(p1.real,p1.imag,p2.real,p2.imag);

			cout << result;
		}
	}else if (oper==2)
	{
		if (choice==2)
		{
			float result=sub(n1,n2);
			cout << result;
		}else{
			complex<double> result=sub(p1.real,p1.imag,p2.real,p2.imag);
			cout << result;
		}
	}else if (oper==3)
	{
		if (choice==2)
		{
			float result=mult(n1,n2);
			cout << result;
		}else{
			complex<double> result=mult(p1.real,p1.imag,p2.real,p2.imag);
			cout << result;
		}
	}else if (oper==4)
	{
		if (choice==2)
		{
			float result=div(n1,n2);
			cout << result;
		}else{
			complex<double> result=div(p1.real,p1.imag,p2.real,p2.imag);
			cout << result;
		}
	}
}
