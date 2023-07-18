#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define endl '\n'
#define nn 100009
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define all(_a) _a.begin(), _a.end()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
void vscodeonly()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void errortxt()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
}
void yoyochikichiki()
{
    fast();
    // vscodeonly();
    errortxt();
}
vector<pair<int, int>> vp;
int func1(int a, int b)
{
    int rem = a % b;
    vp.pb({a, b});
    if (rem == 0)
        return b;
    func1(b, rem);
}
int encrypted(int a, int b, int c)
{
    int one = pow(a, b);
    int two = one % c;
    cout << "encrypted " << two << endl;
    return two;
}
void decrypted(int a, int b, int c)
{
    long long one = pow(a, b);
    int two = one % c;
    cout << "decrypted " << two << endl;
}
int main()
{
    yoyochikichiki();
    int p = 3, q = 11;
    int n = p * q;               // 33
    int phi = (p - 1) * (q - 1); // 20
    int number;
    cin >> number;
    int key1;
    for (int i = 2; i < phi; i++)
    {
        if (gcd(phi, i) == 1)
        {
            key1 = i;
            break;
        }
    }
    // cout << key1 << endl; //3
    int e1 = encrypted(number, key1, n);
    // 2nd key
    int g = func1(key1, phi);
    int s = 1;
    int t = 0;
    for (int i = vp.size() - 1; i >= 0; i--)
    {
        int temp = s;
        s = t;
        t = temp - (vp[i].ff / vp[i].ss) * t;
    }
    int key2 = s;
    decrypted(e1, key2, n);
}

