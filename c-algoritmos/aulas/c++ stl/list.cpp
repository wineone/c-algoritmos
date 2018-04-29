#include <iostream>
#include <list>
#include <string>

using namespace std;

bool par(int n){
	return (n%2 == 0);
}

bool tam(string &s1,string &s2){
	if(s1.length() < s2.length()) return true;
	return false;
}

int main(){
	list<int> l1;//definição
	list<int> l2(3,10);//inicializando com 3 espaçoes e valor 10

	l1.push_back(10);//coloca atras
	l1.push_front(20);//frente
	l1.push_back(30);
	l1.push_front(1);

	cout << "l1:\n";
	for(list<int>::iterator it = l1.begin(); it != l1.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}

	cout << endl << "l2:" << endl;
	for(list<int>::iterator it = l2.begin(); it != l2.end(); it++){//iterando sobre a lista l2
		cout << *it << " ";
	}

	cout << "\nprimeiro elemento de l1: " << l1.front();//primeiro elemento
	cout << "\nultimo elemento de l1: " << l1.back() << endl;//ultimo elemento

	cout << "tamanho de l1: " << l1.size() << endl;//pega o tamanho

	l1.pop_back();//retira do começo
	l1.pop_front();//retira do final

	cout << "l1:\n";
	for(list<int>::iterator it = l1.begin(); it != l1.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;

	while(!l2.empty()) l2.pop_front();
	cout << "novo tamanho de l2: " << l2.size() << endl;//pega o tamanho

	int vet[] = {1,2,1,2,5,45,4,8};
	l2.assign(vet,vet+8);//coloca valores dentro da lista
	cout << "novos elementos de l2:\n";
	for(list<int>::iterator it = l2.begin(); it != l2.end(); it++){//iterando sobre a lista l2
		cout << *it << " ";
	}
	cout << endl;

	//inserindo um elemento
	list<int>::iterator it2 = l2.begin();
	for(int i  = 0; i < 4; i++, it2++);
	l2.insert(it2,100);
	l2.insert(--it2,110);
	for(list<int>::iterator it = l2.begin(); it != l2.end(); it++){//iterando sobre a lista l2
		cout << *it << " ";
	}
	cout << endl;

	l2.insert(--it2,31);
	l2.insert(--it2,32);
	l2.insert(--it2,3,33);
	for(list<int>::iterator it = l2.begin(); it != l2.end(); it++){//iterando sobre a lista l2
		cout << *it << " ";
	}
	cout << endl;



	//apagando em um intervalo
	cout << "erase\n";
	it2 = l2.begin();
	for(int i = 0; i < 4; i++,it2++);
	l2.erase(l2.begin(),it2);
	for(list<int>::iterator it = l2.begin(); it != l2.end(); it++){//iterando sobre a lista l2
		cout << *it << " ";
	}
	cout << endl;

	//remover todos os elemtos
	l2.clear();
	cout << "tam de l2 dps do clear: " << l2.size() << endl;

	//copiando com splice
	list<int> lis1(3,10),lis2(3,20);
	l1.splice(lis1.begin(),lis2);
	cout << "lis1:\n";
	for(list<int>::iterator it = lis1.begin(); it != lis1.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;

	cout << "tam de lis2: " << lis2.size() << endl;

	//lista.remove - remove todos os elementos iguais a o parametro passado
	lis1.remove(20);
	cout << "lis1:\n";
	for(list<int>::iterator it = lis1.begin(); it != lis1.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;

	//remove_if
	int vet1[] = {1,2,3,4,5,2,1,2,5,4,5,8,6};
	list<int> lis3(vet1,vet1+13);
	cout << "lis3 antes:\n";
	for(list<int>::iterator it = lis3.begin(); it != lis3.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;
	lis3.remove_if(par);
	cout << "lis3 depois:\n";
	for(list<int>::iterator it = lis3.begin(); it != lis3.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;

	//ordenação de listas
	int vet3[] = {1,2,1,5,2,1,2,5,8,7,4,5,9,6,5,2,1};
	list<int> lis4(vet,vet+17);
	cout << "lis4 antes:\n";
	for(list<int>::iterator it = lis4.begin(); it != lis4.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;
	lis4.sort();
	cout << "lis4 depois do sort:\n";
	for(list<int>::iterator it = lis4.begin(); it != lis4.end(); it++){//iterando sobre a lista l1
		cout << *it << " ";
	}
	cout << endl;

	//ordenando strings
	list<string> lis6;
	lis6.push_back("matheus");
	lis6.push_back("qqqqq");
	lis6.push_back("oia");
	lis6.push_back("jao");
	lis6.push_back("pinico");
	lis6.sort();
	cout << "lis6 ordenada alfabeticamente:" << endl;
	for(list<string>::iterator it = lis6.begin(); it != lis6.end(); it++){
		cout << *it << endl;
	}
	lis6.sort(tam);
	cout << "lis6 ordenada por tamanho:" << endl;
	for(list<string>::iterator it = lis6.begin(); it != lis6.end(); it++){
		cout << *it << endl;
	}
	return 0;
}