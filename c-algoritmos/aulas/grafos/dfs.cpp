//lista de adjacencia - DFS
#include <cstdio>
#include <list>
#include <stack>

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

	void mostraLiga(){
		for(int i = 0; i < ver; i++){
			printf("%d -> ",i);
			for(list<int>::iterator it = lis_adj[i].begin(); it != lis_adj[i].end(); it++)
				printf("%d ",*it);
			putchar('\n');
		}
	}

	void dfs(int v){

		stack<int> pilha;
		bool visitados[ver];

		for(int i = 0; i < ver; i++)
			visitados[i] = false;

		while(true){
			if(!visitados[v]){
				printf("visitando vertice %d\n",v);
				visitados[v] = true;
				pilha.push(v);
			}

			bool achou = false;
			list<int>::iterator it;

			for(it = lis_adj[v].begin(); it != lis_adj[v].end(); it++){
				if(!visitados[*it]){
					achou = true;
					break;
				}
			}

			if(achou){
				v = *it;
			}else{
				pilha.pop();
				if(pilha.empty()) break;
				v = pilha.top();
			}

		}
	}



};

int main(){
	Grafo gra(5);
	gra.adcionaAresta(0,2);
	gra.adcionaAresta(2,3);
	gra.adcionaAresta(1,0);
	gra.adcionaAresta(1,2);

	gra.dfs(0);
	return 0;
}