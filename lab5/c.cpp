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
vector<pair<int, int>> v;
int function1(int n1, int n2)
{
    int rem = n1 % n2;
    // cout << n1 << " = " << n1 / n2 << " * " << 91 << " + " << rem << endl;
    v.pb({n1, n2});
    if (rem == 0)
        return n2;
    function1(n2, rem);
}
int32_t main()
{
    yoyochikichiki();
    int n1, n2;
    cin >> n1 >> n2;
    int gcd = function1(max(n1, n2), min(n1, n2));
    cout << "gcd = " << gcd << endl;
    int s = 1, t = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int temp = s;
        s = t;
        t = temp - ((v[i].ff / v[i].ss)) * t;
    }
    cout << "Bézout’s coeffficient = " << s << " " << t << endl;
}
