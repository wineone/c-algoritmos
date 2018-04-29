#include <iostream>
#include <vector>

using namespace std;

class ponto{
public:
	int x;
	ponto(int x){
		this->x = x;
	}
};


int main(){
	vector<ponto> vet;
	for(int i = 0; i < 10; i++){
		ponto p(i);
		vet.push_back(p);
	}

	vector<ponto>::iterator it;
	for(it = vet.begin(); it != vet.end(); it++){
		cout << (*it).x << endl;
	}
	return 0;
}