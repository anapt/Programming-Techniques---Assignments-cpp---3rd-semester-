#include <iostream>
#include <string>
#include "class.h"

using namespace std;

int main()
{
	cout << "Testing class.";
	cout << "\n\n";
	
	catalog obj0;
	
	cout << "\n\n";
	
	catalog obj("Anastasia", 12345);
	
	cout << "Creating second object. \n";
	cout << obj.name << "  " << *obj.number << "\n";
	cout << "\n\n";
	
	cout << "Test complete.\n";
	
}
