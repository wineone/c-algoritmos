#include <iostream>
#include <string.h>

using namespace std;


class Pessoa{
public:
	int idade;
	char *nome;

	Pessoa(const char *no){
		idade = 10;
		nome = new char[strlen(no) + 1];
		strcpy(nome,no);
	}	


	Pessoa(const Pessoa &a){
		nome = new char[100];
		strcpy(nome, "Copia de ");
		strcat(nome,a.nome);
	}

	~Pessoa(){
		cout << "deletando " << nome << endl;
		delete[] nome;
	}

};

int main(){
	Pessoa p("matheus lisboa");

	Pessoa j = p;
	cout << p.nome << endl;
	cout << j.nome << endl;
}