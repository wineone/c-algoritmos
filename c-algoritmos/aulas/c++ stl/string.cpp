#include <iostream>
#include <string>

using namespace std;



void show_msg(const char *n){
	cout << "strings para c legado: " << n << endl;
}

int main(){
	string str = "matheus lisboa";
	cout << "string: " << str << endl;//uso da string
	cout << "tamanho: " << str.size() << endl;//retorna o tamanho
	cout << "at: " << str.at(4) << endl;//retorna o cacatere no indice
	cout << "ultimo caractere: " << str.back() << endl;//c++ 11
	cout << "primeiro caractere: " << str.front() << endl;//c++ 11

	str = "matheus";//redefinição
	str.append(" lisbo");//appendando
	str.push_back('a');//colocando um char
	cout << "depois de appendar: " << str << endl;

	str = "matheus";
	str.insert(0,"lisboa ");//insere no indice sem perder a string origi
	cout << "insertando: " << str << endl;
	
	str.erase(0,7);// apagando a string pelos indices
	cout << str << endl;


	str.clear();//apagando tudo
	if(str.empty()) cout << "string vazia" << endl;//testa se está vazia
	else cout << "string nao vazia" << endl;

	str = "matheus lisboa"; //redefinindo
	show_msg(str.c_str());//como passar strings para funçoes c legado

	str.replace(0,7,"leoa");//troca na string
	cout << str << endl;

	str = "matheus lisboa";//redefinindo;

	size_t achou = str.find("the");
	if(achou != string::npos) cout << "achou, indice: " << achou << endl;
	else cout << "achou n" << endl;

	string nome;
	//cin >> nome;
	//cout << "só pega a primeira string: " << nome << endl;
	getline(cin,nome);
	cout << "linha toda: " << nome << endl;

	string a = "oi";
	string b = a;
	cout << b << endl;
	b = "ss ";
	b += a;
	cout << b << endl;
	return 0;
}