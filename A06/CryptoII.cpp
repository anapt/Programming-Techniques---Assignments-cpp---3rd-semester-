#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Crypto{

	protected:
		string Message;
		string Encrypted;
		string Decrypted;
	public:
		string virtual Encryption (int l)=0;
		string virtual Decryption (int l)=0;
		string getMessage();
		void setMessage();
		string getEncrypted();
		string getDecrypted();
};


string Crypto::getEncrypted(){
	return Encrypted;
}

string Crypto::getDecrypted(){
	return Decrypted;
}

class Caesar: public Crypto{
	private:
		int shift;
	public:
		string Encryption(int length);
		Caesar(string str);
		string Decryption(int length);
		int getKey()	{	cin >> shift; return shift;	}
	
};

Caesar::Caesar(string str){
	Message = str;
}

string Caesar::Encryption(int length){

	char temp[length];
	
	if (shift>26){
	shift = shift % 26;
	}
	
	for (int i=0;i<length;i++) {
		temp[i] = Message.at(i) + shift;
	}
	
	Encrypted = temp;

	return Encrypted;
}

string Caesar::Decryption(int length){
	
	char temp[length];
	
	if (shift>26){
		shift = shift % 26;
	}
	
	for (int i=0;i<length;i++){
		temp[i] = Encrypted.at(i) - shift;
	}
	
	Decrypted = temp;
	return Decrypted;
	
	
}

class XOR: public Crypto{
	private:
		char key;
	public:
		string Encryption(int length);
		XOR(string str);
		string Decryption(int length);
		char getKey();
	
};

XOR::XOR(string str){
	Message = str;
}

char XOR::getKey(){
	fflush(stdin);
	key=getchar();
	return key;
}

string XOR::Encryption(int length){
	
	
	char temp[length];
	fflush(stdin);
	
	for (int i=0;i<length;i++){
		temp[i] = Message.at(i)^key;
	}
	
	Encrypted = temp;
	return Encrypted;
}

string XOR::Decryption(int length){
	
	char temp[length];
	fflush(stdin);
	
	for (int i=0;i<length;i++){
		temp[i] = Encrypted.at(i)^key;
	}
	
	Decrypted = temp;
	return Decrypted;
}

int main(){
	
	string str = "hello";
	int len = str.size();
	string resEncCes, resDecCes, resEncXOR, resDecXOR;

	Caesar c_enc(str);
	
	cout << "Please, give a number to use as a key for the encryption/decryption. \n";
	c_enc.getKey(); 
	
	// encryption using the Caesar cipher
	c_enc.Encryption(len);
	resEncCes = c_enc.getEncrypted();
	cout << resEncCes << endl;
	
	//decryption using the Caesar cipher
	c_enc.Decryption(len);
	resDecCes = c_enc.getDecrypted();
	cout<< resDecCes << endl;
	
	
	XOR x_enc(str);
	
	cout << "Please, give a single character to use as a key for the encryption/decryption. \n";
	x_enc.getKey();
	
	//encryption using the XOR cipher
	x_enc.Encryption(len);
	resEncXOR = x_enc.getEncrypted();
	cout << resEncXOR <<endl;
	
	//decryption using the XOR cipher
	x_enc.Decryption(len);
	resDecXOR = x_enc.getDecrypted();
	cout << resDecXOR << endl;
}
