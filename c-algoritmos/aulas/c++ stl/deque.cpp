//classe deque
#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> fila;//definição

	cout << "começo : ";
	if(fila.empty()) cout << "vazia" << endl;//verifica se ta vazia
	else cout << "tem" << endl;

	fila.push_back(10);//coloca no final
	fila.push_back(30);
	fila.push_back(1);
	fila.push_front(88);//coloca no começo
	fila.push_front(8);
	fila.push_front(7);

	cout << "mostrando os elemtos: ";
	for(deque<int>::iterator it = fila.begin(); it != fila.end(); it++) 
		cout  << *it << " ";
	cout << endl;

	fila.clear();//limpa a deque
	cout << "depois do clear: ";
	if(fila.empty()) cout << "vazia" << endl;
	else cout << "tem" << endl;

	//recolocando
	fila.push_back(10);//coloca no final
	fila.push_back(30);
	fila.push_back(1);
	fila.push_front(88);//coloca no começo
	fila.push_front(8);
	fila.push_front(7);

	//apaga no endereço
	fila.erase(fila.begin() + 3);

	cout << "depois do erase: ";
	for(deque<int>::iterator it = fila.begin(); it != fila.end(); it++) 
		cout  << *it << " ";
	cout << endl;	

	//colocan no endereço
	fila.insert(fila.begin() + 3, 10);

	cout << "depois do insert: ";
	for(deque<int>::iterator it = fila.begin(); it != fila.end(); it++) 
		cout  << *it << " ";
	cout << endl;	

	int aux = fila.front();
	fila.pop_front();

	cout << aux << endl;
	cout << "depois do pop: ";
	for(deque<int>::iterator it = fila.begin(); it != fila.end(); it++) 
		cout  << *it << " ";
	cout << endl;


	return 0;
}