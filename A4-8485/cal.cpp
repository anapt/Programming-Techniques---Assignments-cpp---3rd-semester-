#include <iostream>
#include "stdlib.h"
#include "class_cal.hpp"

using namespace std;


int main(){
	
	
	int d,m,y;
	
	cout << "Please give the day, month, year of the 1st date you want to add \n";
	cin >> d >> m >> y;
	Calendar d1(&d,&m,&y);
	cout << "Please give the day, month, year of the 2nd date you want to add \n";
	cin >> d >> m >> y;
	Calendar d2(&d,&m,&y);
	Calendar resultadd;
	resultadd = d1 + d2;
	cout << "The result of the addition is: " <<resultadd.d << " " << resultadd.m << " " << resultadd.y << "\n";
	
	cout << "Please give the day, month, year of the 1st date you want to subtract \n";
	cin >> d >> m >> y;
	Calendar d3(&d,&m,&y);
	cout << "Please give the day, month, year of the 2nd date you want to subtract \n";
	cin >> d >> m >> y;
	Calendar d4(&d,&m,&y);
	Calendar resultsub;
	resultsub = d3 - d4;
	cout << "The result of the subtraction is: " << resultsub.d <<" " << resultsub.m << " " << resultsub.y << "\n";
	
	cout << "Please give the day, month, year of the date you want to copy \n";
	cin >> d >> m >> y;
	Calendar d5(&d, &m, &y);
	Calendar testcopy;
	testcopy = d5;
	cout << "A copy of the date you entered was generated. " << testcopy.d <<" " << testcopy.m << " " << testcopy.y << "\n";
	
}
