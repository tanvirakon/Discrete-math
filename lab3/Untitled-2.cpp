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
    // f(x)=x^2
    vector<int> c;
    for (int i = 0; i < A; i++)
        c.push_back(a[i] * a[i]);
    cout << "Ques no 1 : ";
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());
    if (c == b)
        cout
            << "YES" << endl;
    else
        cout << "NO" << endl;
    c.clear();
    // f(x)=x^2 + 1
    for (int i = 0; i < A; i++)
        c.push_back((a[i] * a[i]) + 1);
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());
    cout << "Ques no 2 : ";
    if (c == b)
        cout
            << "YES" << endl;
    else
        cout << "NO" << endl;
    c.clear();
    // f(x)=x^3+x^2-x-1
    for (int i = 0; i < A; i++)
        c.push_back((a[i] * a[i] * a[i]) + (a[i] * a[i]) - a[i] - 1);
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());
    cout << "Ques no 3 : ";
    if (c == b)
        cout
            << "YES" << endl;
    else
        cout << "NO" << endl;
}