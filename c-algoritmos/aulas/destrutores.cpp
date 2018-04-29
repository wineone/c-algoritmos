#include <iostream>
#include <string.h>

using namespace std;


class Pessoa{
public:
	Pessoa(const char *n,int ida){
		strcpy(nome,n);
		idade = ida;
		paren = new int[100];
	}

	~Pessoa(){
		cout << "ora ora" << endl;
		delete[] paren;
	}

	char* getNome(){
		return nome;
	}

	int getIdade(){
		return idade;
	}
private:
	char nome[100];
	int idade;
	int *paren;
};


int main(){
	Pessoa *p[3];
	for(int i = 0; i < 3; i++){
		p[i] = new Pessoa("matheus",i);
	}

	cout << p[1]->getIdade() << endl;
	cout << p[1]->getNome() << endl;

	for(int i = 0; i < 3; i++){
		delete p[i];
	}
	return 0;
}