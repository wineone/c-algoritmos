//algoritimo - union find -
#include <cstdio>


using namespace std;

int busca(int subset[], int v){
	if(subset[v] == -1) return v;
	else return busca(subset,subset[v]);
}

bool tem_ciclo(int grafo[][4]){
	int liga[4] = {-1,-1,-1,-1};
	for(int i = 0; i < 4; i++){
		for(int j = i; j < 4; j++){
			if(grafo[i][j]){
				int v1 = busca(liga,i);
				int v2 = busca(liga,j);
				if(v1 == v2) return true;
				else liga[v1] = v2;
			}
		}
	}
	return false;

}


int main(){
	int grafo[4][4] = {{0,1,0,0},
					   {0,0,1,1},
					   {0,0,0,1},
					   {0,0,0,0}};
	if(tem_ciclo(grafo)) printf("tem\n");
	else printf("tem n\n");


	return 0;
}
