#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v;//declaração do vector, tabém poderia ser inicializado com 0's passado o tamanho v(x);
	v.push_back(55);//coloca ao final da lista
	v.push_back(44);
	v.push_back(8);

	while(!v.empty()) v.pop_back();//verifica se está vazia e retira o ultimo elemento

	if(v.empty()) cout << "vazio" << endl;
	else cout << "nao vazio" << endl;

	v.push_back(44);
	v.push_back(8);
	v.push_back(55);

	cout << "front e back\n";
	cout << v.front() << endl;//pega o primeiro elemento
	cout << v.back() << endl;//pega o ultimo elemento


	cout << "erase\n";
	vector<int>::iterator it = v.begin();//iterator para passar para o insert
	v.insert(it + 1, 2);
	cout << v[1] << endl;

	v.erase(it + 1);//apaga o elemtento no endereço
	cout << v[1] << endl;


	cout << "swap\n";
	vector<int> a(2,6);//tamanho e preenchimento
	vector<int> b(2,3);

	a.swap(b);//troca os vectors
	vector<int>::iterator it1 = a.begin();//iterators
	for(;it1 != a.end(); it1++) cout << *it1 << endl;

	vector<int>::iterator it2 = b.begin();//itereators
	for(;it2 != b.end(); it2++) cout << *it2 << endl;


	cout << "tamanho" << endl;
	cout  << v.size() << endl;
	v.clear();//limpa o vector completo
	cout << v.size() << endl;

	return 0;
}