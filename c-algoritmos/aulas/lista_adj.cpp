//lista de adjacencia
#include <cstdio>
#include <list>

using namespace std;

class Grafo{
private:
	int ver;
	list<int>* lis_adj;
public:
	Grafo(int v){
		ver = v;
		lis_adj = new list<int>[ver];
	}

	void adcionaAresta(int v1, int v2){
		lis_adj[v1].push_back(v2);
	}

	int grauSaida(int v1){
		return lis_adj[v1].size();
	}

	bool verVizi(int v1, int v2){
		list<int>::iterator it;
		for(it = lis_adj[v1].begin(); it != lis_adj[v1].end(); it++){
			if(*it == v2) return true;
		}
		return false;
	}

	void mostraLiga(){
		for(int i = 0; i < ver; i++){
			printf("%d -> ",i);
			for(list<int>::iterator it = lis_adj[i].begin(); it != lis_adj[i].end(); it++)
				printf("%d ",*it);
			putchar('\n');
		}
	}
};

int main(){
	Grafo g(4);
	g.adcionaAresta(0,1);
	g.adcionaAresta(0,3);
	g.adcionaAresta(1,2);
	g.adcionaAresta(3,1);
	g.adcionaAresta(3,2);

	for(int i = 0; i < 4; i++)
		printf("Grau de saida de %d: %d\n",i,g.grauSaida(i));

	g.mostraLiga();
	return 0;
}