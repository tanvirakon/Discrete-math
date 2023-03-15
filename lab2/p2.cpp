#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    cout << "enter number\n";
    int n; cin >> n;
    int x = 0;
    while (1) {
        if (n & 1) {
            n = 3 * n + 1;
        }
        else n /= 2;
        x++;
        if (n == 1) {
            cout << "yes 1 found\n";
            cout << "iteration required " << x << endl;
            break;
        }
    }

}
