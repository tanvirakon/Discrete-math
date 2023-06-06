#include <bits/stdc++.h>
using namespace std;
#define int long long int
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
    vscodeonly();
    errortxt();
}
vector<int> primefactorization(int n)
{
    vector<int> a;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                a.pb(i);
            }
        }
    }

    return a;
}

int32_t main()
{
    yoyochikichiki();
    int n, m;
    cin >> n >> m;
    int multiply = n * m;
    vector<int> a;
    vector<int> b;
    a = primefactorization(n);
    b = primefactorization(m);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                gcd *= b[j];
                b.erase(b.begin() + j);
                break;
            }
        }
        debug(b.size());
    }

    cout << "gcd " << gcd << endl;
    cout << "lcm " << multiply / gcd << endl;
}
