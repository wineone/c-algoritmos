#include <iostream>

using namespace std;

class No{
public:
	int val;
	No *dir;
	No *esq;
	No(int valor){
		val = valor;
		dir = NULL;
		esq = NULL;
	}
};


class Arvore{
private:
	No* raiz;
public:
	Arvore(){
		raiz = NULL;
	}

	void inserir(int valor){
		if(raiz == NULL) raiz = new No(valor);
		else inserirAux(raiz,valor);
	}

	void inserirAux(No *cor, int valor){
		if(valor < cor->val){
			if(cor->esq == NULL) cor->esq = new No(valor);
			else inserirAux(cor->esq, valor);
		}else if( valor > cor->val){
			if(cor->dir == NULL) cor->dir = new No(valor);
			else inserirAux(cor->dir, valor);
		}
	}

	void emOrdem(No *n){
		if(n != NULL){
			emOrdem(n->esq);
			cout << n->val << " ";
			emOrdem(n->dir);
		}
	}


	No* getRaiz(){
		return raiz;
	}
};

int main(){
	Arvore arv;
	arv.inserir(1555);
	arv.inserir(15);
	arv.inserir(8);
	arv.inserir(3);
	arv.inserir(10);
	arv.inserir(14);
	arv.inserir(13);
	arv.inserir(1);
	arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);
	
	cout << "imprimindo em ordem: " << endl;
	arv.emOrdem(arv.getRaiz());
	cout << endl;
	return 0;
}