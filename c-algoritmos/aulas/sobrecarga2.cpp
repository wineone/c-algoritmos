#include <iostream>
#include <cstring>

using namespace std;

class Pessoa{
private:
	char *nome;
	int id;
public:
	void inicializar(const char *nome, int id){
		this->nome = new char[strlen(nome) + 1];
		strcpy(this->nome,nome);
		this->id = id;
	}
	Pessoa(const char *nome, int id){
		inicializar(nome,id);
	}

	void destruir(){
		cout << "destruindo " << nome << endl;
		delete[] nome;
		nome = 0;
	}
	~Pessoa(){
		destruir();
	}


	Pessoa(Pessoa &e){
		cout << "." << endl;
		inicializar(e.getNome(),e.getId());
	}


	Pessoa& operator=(Pessoa &p){
		cout << "entrou aq" << endl;
		if(this != &p){
			destruir();
			inicializar(p.getNome(),p.getId());
		}
		return *this;
	}

	const char* getNome(){
		return nome;
	}

	int getId(){
		return id;
	}

	void mudaPri(char c){
		nome[0] = c;

	}
};


int main(){
	Pessoa p1("matheus lisboa",1);
	Pessoa p2 = p1;

	p2.mudaPri('l');

	cout << p1.getNome() << endl;
	cout << p2.getNome() << endl;

	return 0;
}