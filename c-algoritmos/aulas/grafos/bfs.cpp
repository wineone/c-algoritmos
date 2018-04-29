#include <cstdio>
#include <list>
#include <queue>

using namespace std;

class grafo{
private:
	int ver;
	list<int>* lis_adj;
public:
	grafo(int n){
		ver = n;
		lis_adj = new list<int>[ver];
	}

	void adiciona(int n, int n1){
		lis_adj[n].push_back(n1);
	}

	void bfs(int com){
		queue<int> fila;
		bool visitados[ver] = {false};
		visitados[com] = true;
		while(true){
			printf("vistando o vertice: %d\n",com);
			for(list<int>::iterator it = lis_adj[com].begin(); it != lis_adj[com].end(); it++){
				if(!visitados[*it]){
					fila.push(*it);
					visitados[*it] = true;
				}
			}
			if(!fila.empty()){
				com = fila.front();
				fila.pop();
			}else break;
		}
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
	grafo g(6);
	g.adiciona(0,1);
	g.adiciona(0,2);
	g.adiciona(1,3);
	g.adiciona(2,3);
	g.adiciona(3,4);
	g.adiciona(3,5);

	g.mostraLiga();
	g.bfs(0);

	return 0;
}