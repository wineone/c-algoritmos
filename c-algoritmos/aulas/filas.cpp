#include <iostream>
#include <list>

using namespace std;


//função template
template<class t>
t soma(t a, t b){
	return a + b;
}


//class template
template<class T>
class Fila{
private:
	list<T> li;

public:
	void inserir(const T& inse){
		li.push_back(inse);
	}

	bool vazia(){
		return li.empty();
	}

	T pop_front(){
		if(!vazia()){
			T e = li.front();
			li.pop_front();
			return e;

		}
		throw "fila vazia!!\n";

	}

	T front(){
		if(!vazia()) return li.front();
		throw "fila vazia!!\n";
	}

	T back(){
		if(!vazia()) return li.back();
		throw "fila vazia!!\n";
	}

	int size(){
		return li.size();
	}

};

int main(){
	Fila<double> fi;
	try{
		double e = fi.pop_front();
	}catch(const char *n){
		cerr << n;
	}

	fi.inserir(11.2);
	fi.inserir(1.2);
	fi.inserir(1.52);

	cout << fi.pop_front() << endl;
	cout << fi.pop_front() << endl;
	cout << fi.pop_front() << endl;

	return 0;
}