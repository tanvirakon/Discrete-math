#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, d, l, u, sum1 = 0, sum2 = 0, r;
    // cout << 'a ' << 'd ' << 'l ' << 'u ' << 'r ' << endl;
    cin >> a >> d >> l >> u >> r;
    for (int i = l; i <= u; i++)
        sum1 += (a + i * d);
    for (int i = l; i <= u; i++)
        sum2 += (a * pow(r, i));
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
}