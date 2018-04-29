#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream in("teste.txt");//abre arquivo
	string texto;

	char c = in.get();//pega char por char
	while(in.good()){//equanto puder ler
		cout << c;
		texto.push_back(c);//coloca na string
		c = in.get();//pega o prox
	}
	cout << "\n\nmostrando string\n";
	cout << texto << endl;//printa a string

	return 0;
}

#####################################################

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ofstream ou("saida.txt");
	ou << "Aprendo c++\n";
	ou << "matheus lisboa";
	return 0;
}

#####################################################

