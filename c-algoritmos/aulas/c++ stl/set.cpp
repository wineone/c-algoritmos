#include <cstdio>
#include <set>

using namespace std;

int main(){
	int vet[] = {555,1,2,12,1,2,1,5,2,6,3,2,55,8,5};
	set<int> conj(vet,vet+(sizeof(vet)/sizeof(int)));

	for(set<int>::iterator it = conj.begin(); it != conj.end(); it++)
		printf("%d ",*it);
	putchar('\n');

	//conj.clear();//limpa o set
	//printf("tamanho: %li\n",conj.size());

	set<int>::iterator it2 = conj.begin();
	for(int i = 0; i < 6; i++,it2++)	
	conj.erase(it2);


	conj.insert(111);
	for(set<int>::iterator it = conj.begin(); it != conj.end(); it++)
		printf("%d ",*it);
	putchar('\n');



	it2 = conj.find(77);
	if(it2 != conj.end()) printf("tem\n");
	else printf("tem n\n");
	return 0;
}