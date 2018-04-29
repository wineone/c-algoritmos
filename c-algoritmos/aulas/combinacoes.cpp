//combinações - backtracking
#include <cstdio>

using namespace std;


void comb(int vet[], bool v_bool[], int come, int tam){
	if(come == tam){
		for(int j = 0; j < tam; j++){
			if(v_bool[j]) printf("%d ",vet[j]);
		}putchar('\n');
	}else{
		v_bool[come] = true;
		comb(vet,v_bool,come + 1,tam);
		v_bool[come] = false;
		comb(vet,v_bool,come + 1,tam);
	}
}


int main(){
	int vet[] = {1,2,3,4,5};
	bool v_bool[] = {0,0,0,0,0};
	comb(vet,v_bool,0,5);
	return 0;
}