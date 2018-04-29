#include <cstdio>
#include <stack>

using namespace std;

int main(){
	stack<int> s;
	s.push(10);
	s.push(102);
	s.push(110);
	s.push(1);
	//-> 1 110 102 10 -> remove do topo
	printf("tamanho: %li\n",s.size());
	while(!s.empty()){
		printf("%d ",s.top());
		s.pop();
	}putchar('\n');

	return 0;
}