#include <queue>
#include <cstdio>
#include <map>
#include <cstdio>

#define duo pair<int,int> 
using namespace std;

int matriz[105][105];
int vist[105][105];

int mx[] = {1,-1, 0, 0, 1, 1,-1,-1};
int my[] = {0, 0, 1,-1, 1,-1, 1,-1};
int maxi, may;


bool check(int x, int y){
	return x < maxi && x >= 0 && y < may && y >= 0 && !vist[x][y] && matriz[x][y]; 
}

void bfs(duo come){

	queue<duo> que;
	que.push(come);
	matriz[come.first][come.second] = 0;
	vist[come.first][come.second] = 1;

	while(!que.empty()){

		duo tes = que.front();
		que.pop();

		for(int i = 0; i < 8; i++){
			int x = tes.first + mx[i];
			int y = tes.second + my[i];
			if(check(x, y)){
				matriz[x][y] = matriz[tes.first][tes.second] + 1;
				vist[x][y] = 1;
				que.push(make_pair(x,y));
			}
		}
	}	

}

int obMaior(){
	int maior = matriz[0][0];
	for(int j = 0; j < maxi; j++){
		for(int k = 0; k < may; k++){
			if(maior < matriz[j][k]) maior = matriz[j][k];
		}
	}
	return maior;

}

int main(){
	int vezes;
	scanf("%d",&vezes);
	for(int i = 0; i < vezes; i++){
		scanf("%d %d",&maxi,&may);
		for(int j = 0; j < maxi; j++){
			for(int k = 0; k < may; k++){
				scanf("%d",&matriz[j][k]);
				vist[j][k] = 0;
			}
		}
		int x,y;
		scanf("%d %d",&x,&y);

		bfs(make_pair(x - 1,y - 1));

		printf("%d\n",obMaior());
	}
	return 0;

}