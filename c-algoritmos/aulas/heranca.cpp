#include <iostream>
#include <string.h>

using namespace std;

class Animal{
private:
	char *nome;
	bool voa;
	int patas;
public:
	Animal(const char *nome, int patas){
		this->nome = new char[strlen(nome) + 1];
		strcpy(this->nome,nome);

		voa = false;
		this->patas = patas;

	}

	~Animal(){
		delete[] nome;
	}


	const char* getNome(){
		return nome;
	}

	bool getVoa(){
		return voa;
	}

	int getPatas(){
		return patas;
	}

};

class Cachorro : public Animal{
private:
	int idade;
	char *cor;
public:
	Cachorro(const char *cor,int idade, const char *nome,int patas) : Animal(nome,patas){
		this->cor = new char[strlen(cor) + 1];
		strcpy(this->cor,cor);
		this->idade = idade;
	}
	~Cachorro(){
		delete[] cor;
	}

	int getIdade(){
		return idade;
	}

	const char* getCor(){
		return cor;
	}
};


int main(){
	Cachorro c("preta",15,"pretin",4);

	cout << c.getIdade() << endl;
	cout << c.getCor() << endl;
	cout << c.getNome() << endl;
	cout << c.getVoa() << endl;
	cout << c.getPatas() << endl;

	return 0;
}