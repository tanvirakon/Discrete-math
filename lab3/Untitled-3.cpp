#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "element of A? ";
    int A, B;
    cin >> A;
    cout << "enter element of A? ";
    vector<int> a(A);
    for (int i = 0; i < A; i++)
        cin >> a[i];
    cout << "element of B? ";
    cin >> B;
    cout << "enter element of B? ";
    vector<int> b(B);
    for (int i = 0; i < B; i++)
        cin >> b[i];
    cout << '{';
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
            cout << '(' << a[i] << ',' << b[j] << ')' << " ";
    }
    cout << '}';
}
