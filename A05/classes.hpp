#ifndef CLASSES_HPP_INCLUDED
#define CLASSES_HPP_INCLUDED

#include <iostream>

using namespace std;

class Gate {
	protected:
		bool a,b;
	public:
		Gate(){ } //default constructor
};

class Andgate: public Gate{
	public:
		bool getoutput(){
			if ((a==1) && (b==1)){
				return 1;
			}else{
				return 0;
			}
		}
		bool getoutput(bool in1,bool in2){
			if ((in1==1) && (in2==1)){
				return 1;
			}else{
				return 0;
			}
		}
}andarr;

class Orgate : public Gate{
	public:
		bool getoutput(){
			if ((a==0) && (b==0)){
				return 0;
			}else{
				return 1;
			}
		}
		bool getoutput(bool in1,bool in2){
			if ((in1==0) && (in2==0)){
				return 0;
			}else{
				return 1;
			}
		}
		
}orarr;

class Notgate : public Gate{
	public:
		bool getoutput(){
			if (a==1){
				return 0;
			}else{
				return 1;
			}
		}
		bool getoutput(bool in1){
			if (in1==1){
				return 0;
			}else{
				return 1;
			}
		}
}notarr;

class HalfAdder : public Gate{
	Andgate x;
	Notgate y;
	Orgate u;
	public:
		bool Sout(bool a,bool b){ // SUM output
			bool step1,step2,step3,step4,step5;
			step1 = y.getoutput(a); // NOT a
			step2 = y.getoutput(b); // NOT b
			step3 = x.getoutput(step1,b); // NOT a AND b
			step4 = x.getoutput(a,step2); // a AND NOT b
			step5 = u.getoutput(step3,step4); // NOT a AND b OR a AND NOT b (XOR gate)
			return step5; // SUM output
		}
		bool Cout(bool a,bool b){ // CARRY output
			bool t1;
			t1 = x.getoutput(a,b); // a AND b
			return t1; // CARRY output
		}
}hlfad;

#endif // CLASSES_HPP_INCLUDED
