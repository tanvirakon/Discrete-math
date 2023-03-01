#include <bits/stdc++.h>
using namespace std;


int one(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (x + 5 <= 0) {
            return 0;
        }
        return 1;
    }
}

int two(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (x + 5 > 0) {
            return 1;
        }
        return 0;
    }
}
int main() {

    int a, b; cin >> a >> b;
    cout << one(a, b) << endl;
    cout << two(a, b) << endl;
}