//matriz de adjacencia
#include <cstdio>

using namespace std;

int m_a[5][5]   =  {{0,0,1,0,0},
					{0,0,1,0,0},
					{1,1,0,1,1},
					{0,0,1,0,1},
					{0,0,1,1,0}};

int main(){
	if(m_a[3][4]) printf("tem\n");
	else printf("tem n\n");

	return 0;
}