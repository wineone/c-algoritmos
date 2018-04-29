#include <cstdio>
#include <cstring>

using namespace std;

int find(int vet[],int d){
	if(vet[d] == -1) return d;
	return vet[d] = find(vet,vet[d]);
}

void uni(int vet[], int p, int q){
	p =  find(vet,p);
	q = find(vet,q);
	if(p == q) return;
	vet[p] = q;
}

int main(){
	int vezes, tam;
	scanf("%d %d",&tam,&vezes);
	int vet[tam];
	memset(vet,-1,sizeof(int)*tam);
	for(int i = 0; i < vezes; i++){
		int p,q;
		scanf("%d %d",&p,&q);
		uni(vet,p - 1,q - 1);
	}
	int fam = 0;
	for(int i = 0; i< tam; i++)
		if(vet[i] == -1) fam++;
	printf("%d\n",fam);
	return 0;
}