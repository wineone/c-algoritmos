//o map insere ordenado, demora mais
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, int> mapa = {{"q",1},{"matheus",5},{"alzi",99},{"carlos",88}};//inicializa no c++ 11
	mapa["fabiana"] = 7;//atribui

	cout<< "vazio: ";
	if(mapa.empty()) cout << "vazio" << endl;//verifica se ta vazio
	else cout << "nao vazio" << endl;

	cout << "tem: ";
	if(mapa.count("qqq") > 0) cout << "ta" << endl;//procura pela chave no mapa
	else cout << "ta n" << endl;

	cout << "mostrando:" << endl;
	for(map<string,int>::iterator it = mapa.begin(); it != mapa.end(); it++)//percorre o mapa
		cout << it->first << " => " << it->second << endl;

	map<string,int>::iterator it = mapa.find("alzi");
	if(it != mapa.end())
		mapa.erase(it);

	cout << "depois do find e erase:\n";
	for(it = mapa.begin(); it != mapa.end(); it++)//percorre o mapa
		cout << it->first << " => " << it->second << endl;	

	return 0;
}