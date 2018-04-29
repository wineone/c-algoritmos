#include <cstdio>


using namespace std;

void troca(int vet[], int a, int b){
	int aux = vet[a];
	vet[a] = vet[b];
	vet[b] = aux;
}


void permuta(int vet[], int inf, int sup){
	if(inf == sup){
		for(int i = 0; i <= sup; i++)
			printf("%d ",vet[i]);
		printf("\n");
	}else{
		for(int i = inf; i <= sup; i++){
			troca(vet,inf,i);
			permuta(vet, inf + 1, sup);
			troca(vet,inf,i);
		}
	}
}

int main(){
	int vet[] = {1,2,3,4,5,6};
	permuta(vet,0,5);
	return 0;
}