#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define TMAX 100000000

bool ehprimo[TMAX];

void crivo() {
	ehprimo[0] = false;
	ehprimo[1] = false;

	for (ll i = 2; i <= (int) sqrt(TMAX); i++) {
		if (ehprimo[i]) {
			for (ll k = i + i; k <= TMAX; k += i) {
				ehprimo[k] = false;
			}
		}
	}

}

int main() {
	memset(ehprimo, true, sizeof(bool) * TMAX);

	ll num;
	crivo();

	while (true) {
		cout << "Número para teste: ";
		cin >> num;

		if (num < 0)	break;

		if (ehprimo[num])
			cout << "é primo" << endl;
		else
			cout << "não é primo" << endl;
	}

	return 0;
}
