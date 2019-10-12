#include <bits/stdc++.h>

using namespace std;

#define MAX 100
#define INF INT_MAX

int nums[MAX];
int sgtree[MAX * 4];

void build(int id, int left, int right) {
    if (left == right) {
        sgtree[id] = nums[left];
    } else {
        int middle = (left + right) / 2;
        build(id * 2, left, middle);
        build(id * 2 + 1, middle + 1, right);

        sgtree[id] = min (sgtree[id*2], sgtree[id*2 + 1]);
    }
}

int query(int id, int left, int right, int x, int y) {
    if (left >= x && right <= y) {
        return sgtree[id];
    } else if (right < x || left > y) {
        return INF;     // elemento neutro da operação,
    } else {            // neste caso é INF pois a operação será o mínimo do nums
        int middle = (left + right) / 2;
        return min(
            query(id * 2, left, middle, x, y),
            query(id * 2 + 1, middle + 1, right, x, y)
        );
    }
}

void update(int id, int left, int right, int pos, int value) {
    if (left == right) {
        sgtree[id] = value;
    } else {
        int middle = (left + right) / 2;

        if (pos <= middle) {
            update(id * 2, left, middle, pos, value);
        } else {
            update(id * 2 + 1, middle + 1, right, pos, value);
        }

        sgtree[id] = min(sgtree[id*2], sgtree[id*2 + 1]);
    }
}

// -------------------

void show_sgtree(int tam) {
    for (int i = 1; i < tam * 4; i++) {
        cout << sgtree[i] << " ";
    }
    cout << "\n";
}

int main() {
    return 0;
}
