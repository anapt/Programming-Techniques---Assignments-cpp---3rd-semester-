#include <iostream>
#include <string>
#include "class.h"
#include <set>

using namespace std;

int main ()
{
	
	std::set<string> names;
  	std::set<int> numbers;
  	std::set<string>::iterator it;
  	std::set<int>::iterator it2;
  	std::set<string>::reverse_iterator rit;
  	std::set<int>::reverse_iterator rit2;
  	std::pair<std::set<int>::iterator,bool> ret;
	

	//manually creating 10 objects
	catalog obj1("Anastasia", 23456);
	catalog obj2("Luke", 12345);
	catalog obj3("Leia", 34567);
	catalog obj4("George", 45678);
	catalog obj5("Lucas", 56789);
	catalog obj6("Anakin", 67890);
	catalog obj7("Yoda", 78901);
	catalog obj8("Han",89012);
	catalog obj9("Obi",90123);
	catalog obj10("Chewbacca", 84850);
	
	names.insert(obj1.name);
	numbers.insert(*obj1.number);
	names.insert(obj2.name);
	numbers.insert(*obj2.number);
	names.insert(obj3.name);
	numbers.insert(*obj3.number);
	names.insert(obj4.name);
	numbers.insert(*obj4.number);
	names.insert(obj5.name);
	numbers.insert(*obj5.number);
	names.insert(obj6.name);
	numbers.insert(*obj6.number);
	names.insert(obj7.name);
	numbers.insert(*obj7.number);
	names.insert(obj8.name);
	numbers.insert(*obj8.number);
	names.insert(obj9.name);
	numbers.insert(*obj9.number);
	names.insert(obj10.name);
	numbers.insert(*obj10.number);

	
	
	if (names.size()==numbers.size())
	{
		
		//printing in ascending order
		it2=numbers.begin();
	  	for (it=names.begin(); it!=names.end(); ++it)
		{
			
			std::cout << *it << "  " << *it2 << "\n";
	  		++it2;
	  		
		}
		
		cout << "\n\n\n";
		
		//printing in descending order
		rit2=numbers.rbegin();
		for (rit=names.rbegin(); rit != names.rend(); ++rit)
		{
			std::cout << *rit << "  " << *rit2 << "\n";
			++rit2;
			
		}
    
	}
	
  	return 0;
}
