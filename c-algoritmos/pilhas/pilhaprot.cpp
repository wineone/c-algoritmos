#include <iostream>
#include "pilhaprot.h"

Pilha::Pilha(){
	vet = new int[100];
	topo = -1;
}
Pilha::~Pilha(){
	cout << "deletando..." << endl;
	delete[] vet;
}

void Pilha::push(int e){
	if(topo == max) cout << "pilha cheia" << endl;
	else vet[++topo] = e;
}	

int Pilha::pop(){
	if(topo == -1){
		return -1;
	}
	else return vet[topo--];
}