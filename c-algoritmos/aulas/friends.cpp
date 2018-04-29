#include <iostream>
#include <string.h>

using namespace std;


class LinguagemAmiga{
	friend class Linguagem;
protected:
	void printe(){
		cout << "hello world" << endl;
	}
};


class Linguagem{
	friend void teste(Linguagem *); 
protected:
	char nome[50];
	LinguagemAmiga *l;

public:
	Linguagem(const char *no){
		strcpy(nome,no);
	}

	char* getNome(){
		return nome;
	}

	void print(){
		l->printe();
	}
};




void teste(Linguagem *l){
	cout << l->nome << endl;
}


int main(){
	Linguagem l("cplusplus");
	l.print();

	teste(&l);

	return 0;
}