#include <iostream>

using namespace std;


template<class Type>
class Pilha{
private:
	Type *vet;
	int topo;
public:
	Pilha(int max){
		vet = new Type[max];
		topo = -1;
	}
	~Pilha(){
		delete[] vet;
	}

	void push(Type obj){
		vet[++topo] = obj;
	}

	Type pop(){
		return vet[topo--];
	}
};

int main(){
	Pilha<char> pi(10);

	pi.push('c');
	pi.push('r');

	cout << pi.pop() << endl;
	cout << pi.pop() << endl;

	return 0;
}

