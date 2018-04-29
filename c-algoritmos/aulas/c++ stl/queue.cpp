#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> q;
	q.push(10);//coloca no final
	q.push(25);
	q.push(11);
	q.push(55);
	
	cout << "primeiro: " << q.front() << endl;
	cout << "ultimo: " << q.back() << endl;

	cout << "vazia? ";
	if(q.empty()) cout << "sim" << endl;
	else cout << "n" << endl;

	//mostrando todos: obs: remove todos;
	while(!q.empty()){
		int e = q.front();
		cout << e << " ";
		q.pop();
	}cout << endl;

	cout << "vazia? ";
	if(q.empty()) cout << "sim" << endl;
	else cout << "n" << endl;

	q.push(10);//coloca no final
	q.push(25);
	q.push(11);
	q.push(55);

	cout << "depois de reenserir: " << q.size() << endl;

}