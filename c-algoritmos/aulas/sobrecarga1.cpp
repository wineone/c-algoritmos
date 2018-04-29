//sobrecarga do operator+
#include <iostream>

using namespace std;

class Complexo{
public:
	int real,imag;

	Complexo(int real, int imag){
		this->real = real;
		this->imag = imag;
	}

	Complexo operator+(Complexo &c){
		return Complexo(real + c.real, imag + c.imag);
	}

	bool operator==(Complexo &c){
		if(c.real == real && c.imag == imag) return true;
		else return false;
	}

};

int main(){
	Complexo n1(3,4),n2(3,4);
	Complexo n3 = n1.operator+(n2);

	cout << n3.real << endl << n3.imag << endl;

	if(n1 == n2) cout << "equals" << endl;
	else cout << "not equals" << endl;


	return 0;
}