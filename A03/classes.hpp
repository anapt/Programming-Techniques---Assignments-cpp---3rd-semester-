#ifndef CLASSES_HPP_INCLUDED
#define CLASSES_HPP_INCLUDED

#include <iostream>

using namespace std;

class Andgate{
	bool a,b;
	public:
		bool seta(){
		
			return a;
		}
		bool setb(){
		
			return b;
		}
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

class Orgate{
	bool a,b;
	public:
		bool seta(){
		
			return a;
		}
		bool setb(int i){
		
			return b;
		}
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

class Notgate{
	bool a,b;
	public:
		bool seta(int i){
		
			return a;
		}
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

class HalfAdder{
	bool a,b;
	Andgate x;
	Notgate y;
	Orgate u;
	public:
		bool seta(){
		
			return a;
		}
		bool setb(){
		
			return b;
		}
		bool Sout(bool a,bool b){
			bool t1,t2,t3,t4,t5;
			t1 = y.getoutput(a); // NOT a
			t2 = y.getoutput(b); // NOT b
			t3 = x.getoutput(t1,b); // NOT a AND b
			t4 = x.getoutput(a,t2); // a AND NOT b
			t5 = u.getoutput(t3,t4); // NOT a AND b OR a AND NOT b (XOR gate)
			return t5; // SUM output
		}
		bool Cout(bool a,bool b){
			bool t1;
			t1 = x.getoutput(a,b); // a AND b
			return t1; // CARRY output
		}
}hlfad;

#endif // CLASSES_HPP_INCLUDED
