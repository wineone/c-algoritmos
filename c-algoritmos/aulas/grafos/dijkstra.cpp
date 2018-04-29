//dijkstra
#include <cstdio>
#include <queue>
#include <list>

#define INF 1000000

using namespace std;

class Grafo{
private:
	int v;
	list<pair<int, int> > *adj;
public:
	Grafo(int v){
		this->v = v;
		adj = new list<pair<int, int> >[v];
	}

	void addAresta(int v1, int v2, int peso){
		adj[v1].push_back(make_pair(v2,peso));
	}

	int dijkstra(int orig, int dest){
		bool visitados[v];
		int ditancias[v];
		priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
		for(int i = 0; i < v; i++){
			ditancias[i] = INF;
			visitados[i] = false;
		}
		ditancias[orig] = 0;
		pq.push(make_pair(ditancias[orig],orig));
		while(!pq.empty()){
			pair<int, int> p = pq.top();
			int u = p.second;
			pq.pop();
			if(!visitados[u]){
				visitados[u] = true;
				list<pair<int,int>>::iterator it;
				for(it = adj[u].begin(); it != adj[u].end(); it++){
					int ver = it->first;
					int peso = it->second;
					if(ditancias[ver] > (ditancias[u] + peso)){
						ditancias[ver] = ditancias[u] + peso;
						pq.push(make_pair(ditancias[ver],ver));
					}
				}
			}
		}
		return ditancias[dest];
	}

};

int main(){
	Grafo g(5);
	g.addAresta(0, 1, 4);
	g.addAresta(0, 2, 2);
	g.addAresta(0, 3, 5);
	g.addAresta(1, 4, 1);
	g.addAresta(2, 1, 1);
	g.addAresta(2, 3, 2);
	g.addAresta(2, 4, 1);
	g.addAresta(3, 4, 1);
	printf("%d\n",g.dijkstra(0,3));
	return 0;
}