#include <iostream>
#include <exception>
#define DEFAULT_SIZE 10

using namespace std;


class myExceptions : public exception
{
	public:
  		virtual const char* what() const throw()
  		{
  			return "Table out of Bounds";
  		}
}myOutOfBoundException;


class safetable {	
	private :
		int *array;
		int size;
		bool flag;
	public:
		safetable();
		safetable(int x);
		int operator [] (int i)
		{
			// case 1 : default constructor ~~~~~ if i > default size (10) =====> throw exception
			// case 2 : constructon (int x) ~~~~~ if i > size (same as x)  =====> throw exception 
			// i < 0 =====> throw exception
			if (   ((flag==0)&&(i>DEFAULT_SIZE))  ||  ((flag==1) && (i>size))  || (i<0)  ) 
			{ 
				throw myOutOfBoundException;
			}
			return array[i];
		}
		~safetable();
};


safetable::safetable()
{
	//default constructor
	array = new int [DEFAULT_SIZE];
	for (int i=0; i < DEFAULT_SIZE ;i++){
		array[i]=i;
	}
	flag=0; // defines case 1
}

safetable::safetable(int x)
{
	//constructor (int x) (size = x);
	size = x;
	array = new int [size];
	for (int i=0;i<size;i++){
		array[i]=i;
	}
	flag=1; // defines case 2
}

safetable::~safetable () {
	delete [] array;
}


int main()
{
	
	try
	{
		
		safetable table1;
		cout<< "Value of A[1]:"<< table1[1] <<endl;
		cout<< "Value of A[2]:"<< table1[2] <<endl;
		cout<< "Value of A[14]:"<< table1[14] <<endl; 
		
	}
	catch (exception& myOutOfBoundException)
	{
		cout << myOutOfBoundException.what() << "\n";
	}
	catch (...)
	{
		cout << "Exception occured.";
	}
	
	
	try
	{
		
		safetable table2(20);
		cout<< "Value of A[1]:"<< table2[1] <<endl;
		cout<< "Value of A[2]:"<< table2[2] <<endl;
		cout<< "Value of A[32]:"<< table2[32] <<endl;
	
	}
	catch (exception& myOutOfBoundException)
	{
		cout << myOutOfBoundException.what() << "\n";
	}
	catch (...)
	{
		cout << "Exception occured.";
	}
	
		
}
