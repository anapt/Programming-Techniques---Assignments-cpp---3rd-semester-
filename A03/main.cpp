#include <iostream>
#include "classes.hpp"

using namespace std;

int main(){
	int i,j;
	bool output;
	cout << "The truth table for 0 AND 1 is as follows: \n" ;
	for (i=0;i<4;i++){
		if (i==0){
			output = andarr.getoutput(0,0);
			cout << "0 0 " << output << endl;
		}else if (i==1){
			output = andarr.getoutput(0,1);
			cout << "0 1 " << output << endl;
		}else if (i==2){
			output = andarr.getoutput(1,0);
			cout << "1 0 " << output << endl;
		}else if (i==3){
			output = andarr.getoutput(1,1);
			cout << "1 1 " << output << endl;
		}
		
	}
	cout << "The truth table for 0 OR 1 is as follows: \n" ;
	for (i=0;i<4;i++){
		if (i==0){
			output = orarr.getoutput(0,0);
			cout << "0 0 " << output << endl;
		}else if (i==1){
			output = orarr.getoutput(0,1);
			cout << "0 1 " << output << endl;
		}else if (i==2){
			output = orarr.getoutput(1,0);
			cout << "1 0 " << output << endl;
		}else if (i==3){
			output = orarr.getoutput(1,1);
			cout << "1 1 " << output << endl;
		}
		
	}
	cout << "The truth table for 0 NOT 1 is as follows: \n" ;
	for (i=0;i<2;i++){
		if (i==0){
			output = notarr.getoutput(0);
			cout << "0 " << output << endl;
		}else if (i==1){
			output = notarr.getoutput(1);
			cout << "1 " << output << endl;
		}
		
	}
	
	cout << "The truth table for the Half Adder is as follows: \n" ;
	bool sum,carry;
	
	for (i=0;i<4;i++){
		if (i==0){
			carry = hlfad.Cout(0,0);
			sum = hlfad.Sout(0,0);
			cout << "0 0 " << carry << " " << sum <<  endl;
		}else if (i==1){
			carry = hlfad.Cout(0,1);
			sum = hlfad.Sout(0,1);
			cout << "0 1 " << carry << " " << sum <<  endl;
		}else if (i==2){
			carry = hlfad.Cout(1,0);
			sum = hlfad.Sout(1,0);
			cout << "1 0 " << carry << " " << sum <<  endl;
		}else if (i==3){
			carry = hlfad.Cout(1,1);
			sum = hlfad.Sout(1,1);
			cout << "1 1 " << carry << " " << sum <<  endl;
		}
	}
	
}
