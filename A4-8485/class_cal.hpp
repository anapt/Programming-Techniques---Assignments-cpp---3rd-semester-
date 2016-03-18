#ifndef CLIENT_HPP_INCLUDED
#define CLIENT_HPP_INCLUDED

#include <iostream>
#include "stdlib.h"

using namespace std;

class Calendar
{
	private:
		int *day, *month, *year;
	public:
		
		int d, m, y;	

		int getDay(int d){
			//cin << d;
			day = &d;
			return *day;
		}
		int getMonth(int m){
			//cin << m;
			month = &m;
			return *month;
		}
		int getYear(int y){
			//cin << y;
			year = &y;
			return *year;
		}
		
		Calendar(int*, int*, int*);
		Calendar () {};
	//	~Calendar ();
	
		Calendar operator + (const Calendar&);
		Calendar operator - (const Calendar&);
		
		Calendar copy(const Calendar&);
		
	
};

Calendar::Calendar(int *day,int *month, int *year){
	this->day = new int(*day);
	this->month = new int(*month);
	this->year = new int(*year);
	
	d=*day;
	m=*month;
	y=*year;
	
	cout << "The date you've entered is: " << *day << " " << *month << " " << *year << endl;
}

/*
Calendar::~Calendar(){
	delete day;
	delete month;
	delete year;
	cout << "Memory released." <<endl;
}*/



Calendar Calendar::operator+ (const Calendar& ob){
	Calendar tempadd;
	tempadd.d = d + ob.d;
	tempadd.m = m + ob.m;
	tempadd.y = y + ob.y;
	if (tempadd.d > 30){
		div_t divresult;
  		divresult = div (tempadd.d,30);
		tempadd.d = divresult.rem ;
		tempadd.m = tempadd.m + divresult.quot;
	}
	if (tempadd.m>12){
		div_t divresult;
		divresult = div (tempadd.m,12);
		tempadd.m = divresult.rem ; 
		tempadd.y = tempadd.y + divresult.quot;
	}
	return tempadd;
}

Calendar Calendar::operator- (const Calendar& ob){
	Calendar tempsub;
	if (y - ob.y > 0){
		tempsub.y = y - ob.y;
		tempsub.m = m - ob.m;
		tempsub.d = d - ob.d;
		if (tempsub.d < 0){
			tempsub.d = tempsub.d + 30;
			tempsub.m = tempsub.m - 1;
		}
		if (tempsub.m < 0){
			tempsub.m = tempsub.m + 12;
			tempsub.y = tempsub.y - 1;
		}
	}
	if (y - ob.y < 0){
		tempsub.y = ob.y - y;
		tempsub.m = ob.m - m;
		tempsub.d = ob.d - d;
		if (tempsub.d < 0){
			tempsub.d = tempsub.d + 30;
			tempsub.m = tempsub.m - 1;
		}
		if (tempsub.m < 0){
			tempsub.m = tempsub.m + 12;
			tempsub.y = tempsub.y - 1;
		}
	}
	return tempsub;

}

Calendar Calendar::copy (const Calendar& ob){
	Calendar tempcopy;
	
	tempcopy.d = ob.d;
	tempcopy.m = ob.m;
	tempcopy.y = ob.y;
	
	return tempcopy;
}

#endif // CLIENT_HPP_INCLUDED
