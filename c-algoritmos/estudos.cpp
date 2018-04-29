#include <cstdio>
#include <bitset>
#include <list>
#include <queue>

#define INF 10000000
#define duo pair<int,int>

using namespace std;

list<pair<int,int> > adj[505];
bitset<505> visitados;
int distancias[505];

void dijikstra(int orig){
	priority_queue<duo , vector<duo>, greater<duo> > pq;
	distancias[orig] = 0;
	pq.push(make_pair(0,orig));

	while(!pq.empty()){
		duo p = pq.top();
		int u = p.second;
		pq.pop();

		if(!visitados[u]){
			visitados[u];
			for(auto r: adj[u]){
				int ver = r.first;
				int peso = r.second;

				if(distancias[ver] > (distancias[u] + peso)){
					distancias[ver] = distancias[u] + peso;
					pq.push(make_pair(distancias[u] + peso, ver));
				}
			}
		}
	}
}

void limpa(int n){
	for(int i = 0; i < n; i++){
		adj[i].clear();
		distancias[i] = INF;
	}
}
int main(){
	limpa(505);
	while(true){
		int num,vezes;
		scanf("%d %d",&num,&vezes);
		if(num + vezes == 0) break;

		for(int i = 0; i < vezes; i++){
			int v1,v2,dis;
			scanf("%d %d %d",&v1,&v2,&dis);

			adj[v1 - 1].push_back(make_pair(v2 - 1,dis));
		}

		int liga;
		scanf("%d",&liga);

		for(int i = 0; i < liga; i++){
			int orig, destino;
			scanf("%d %d",&orig,&destino);
			dijikstra(orig - 1);
			if(distancias[destino - 1] != INF)
				printf("%d\n",distancias[destino - 1]);
			else printf("Nao e possivel entregar a carta\n");
		}putchar('\n');

		visitados.reset();
		limpa(num);


	}


	return 0;
}