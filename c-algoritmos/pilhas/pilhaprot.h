using namespace std;

class Pilha{
private:
	int *vet;
	int topo;
	const static int max = 99;
public:
	Pilha();
	~Pilha();
	void push(int e);
	int pop();
};