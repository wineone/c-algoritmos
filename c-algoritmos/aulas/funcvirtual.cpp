#include <iostream>

using namespace std;

class Mae{
public:
	virtual void print(){
		cout << "classe mae" << endl;
	}
};

class Filha : public Mae{
public:
	void print(){
		cout << "classe filha" << endl;
	}
};


void foo(Mae *p){
	p->print();
}

int main(){
	Filha f;
	Mae m;
	f.print();
	m.print();
	cout << endl;
	foo(&f);
	foo(&m);

	return 0;
}