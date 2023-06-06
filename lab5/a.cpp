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
void primefactorization(int n)
{
    set<int> set;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                set.insert(i);
            }
        }
    }
    for (auto i : set)
        cout << i << " ";
}

int32_t main()
{
    yoyochikichiki();
    int n;
    cin >> n;
    primefactorization(n);
}
