#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

//Invalid input exception
class myException: public exception  
{
	public:
		virtual const char* what() const throw()
		{
			return "Invalid Input";
		}
}myUnknownVarException;

vector<string> name;
vector<double> salary;
		
class employees {
	private:
		string Name;
		double Salary;
	public:
		static int objectCount;
		static double sum;
		employees(){} 						//default constructor
		employees(string n, double s); 		// constructor - keyboard input
		employees (bool); 					//constructor - file input
		vector<double>::iterator it;	
		double avSal();

};

int employees::objectCount =0;
double employees::sum = 0.00;

double employees::avSal()
{
	int i=0;
	for(it=salary.begin() ; it < salary.end(); it++,i++ )
	 {
   		
		sum = sum + salary.at(i);
   	
   	}
  	return (sum / objectCount);
}
		
		
		
//getting input from user
employees::employees(string n, double s)
{
	bool flag=0;
	
	if (isdigit(n[0]))
	{
		flag=1;
		throw myUnknownVarException;
	}
	else 
	{
		objectCount++;
		name.push_back(n);
		salary.push_back(s);
	}
	
}

//getting input from txt file

employees::employees(bool)
{
	ifstream myFile;
	myFile.open("employee.txt", ifstream::in);
	if (!myFile.is_open()) 
	{
        cerr << "There was a problem opening the input file!\n";
        exit(1);//exit or do additional error checking
    }
	
	while (myFile >> Name >> Salary) 
	{
		objectCount++;
		name.push_back(Name);
        salary.push_back(Salary);
    }
	
	for (int i = 0; i < name.size(); ++i) {
		cout << name[i] << " " ;
        cout << salary[i] << endl;
    }
	
}



int main()
{
	
	//Testing input from keyboard.
	
	string n;
	double s;
	int i=0;
	
	while (i<20){
		cout << "Please type a name " << "(Type \"!\" to exit)" << endl;
		
		cin >> n;
		if (n == "!"){
			break;
		}
		
		cout << "Please type the salary connected to the name." << endl;
		
		cin >> s;
	
		
		employees employees(n,s);
		i++;
	}
	
	
	//Testing input from txt file.
	
	employees(0); 			//calling constructor for file input 
	
	
	// Calculating average salary.
	
	employees final;
	cout << "Average salary is: " << final.avSal() << endl;	
	
	
    return 0;
}
