#include <bits/stdc++.h>

using namespace std;

int partition(int lista[], int left, int right) {
	int pivo = right;
	int i = left - 1;
	int j = left, aux;

	while (j < right) {
		if (lista[j] < lista[pivo]) {
			i++;
			aux = lista[i];
			lista[i] = lista[j];
			lista[j] = aux;
		}
		j++;
	}

	i++;
	aux = lista[i];
	lista[i] = lista[pivo];
	lista[pivo] = aux; 

	return i;	// ultima posição do pivo
}

void quickSort(int lista[], int left, int right) {
	if (left < right) {
		int pivo = partition(lista, left, right);
		quickSort(lista, left, pivo - 1);
		quickSort(lista, pivo + 1, right);
	}
}

int main() {
	int lista[] = {5,8,6,5,96,5,2,74,6,27};
	quickSort(lista, 0, 9);

	for (auto i: lista) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
