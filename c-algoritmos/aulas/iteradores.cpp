#include <iostream>
#include <vector>

using namespace std;

int main(){
	/*
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
	*/

	/*
	vector<int> v(6);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;

	vector<int>::iterator it;

	for(it = v.begin(); it != v.end(); it++) cout << *it << endl;
	*/


	vector<int> v(6);
	int i = 0;
	vector<int>::reverse_iterator rit;
	for(rit = v.rbegin(); rit != v.rend(); rit++) *rit = ++i;

	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) cout << *it << endl;

	return 0;
}