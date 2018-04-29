//implementando pilhas em c++
#include <iostream>
#include "pilhaprot.h"

using namespace std;

int main(){
	Pilha pi;
	pi.push(10);
	pi.push(15);
	pi.push(25);
	cout << pi.pop() << endl;
	cout << pi.pop() << endl;
	cout << pi.pop() << endl;

	return 0;
}