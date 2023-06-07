#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define int long long int
#define endl '\n'
#define jhj 100009
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define aint(_a) _a.begin(), _a.end()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NUint);                   \
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
    // fast();
    vscodeonly();
    errortxt();
}
vector<pair<int, int>> vp;
int gd(int n1, int n2)
{

    int md = n1 % n2;
    vp.pb({n1, n2});
    if (md == 0)
    {
        return n2;
    }
    return gd(n2, md);
}
int32_t main()
{
    yoyochikichiki();
    int n;
    cin >> n;
    int nn = n;
    vector<pair<int, int>> v;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }
    vector<int> vm;
    vector<int> va;

    for (auto i : v)
        vm.pb(i.ss); // m1, m2, m3
    for (auto i : v)
        va.pb(i.ff); // a1, a2, a3
    int M = 1;
    for (auto i : v)
    {
        M *= i.ss;
    }
    vector<int> v2;
    for (auto i : vm)
    {
        v2.pb(M / i); // M1 M2 M3
    }
    int s = 1;
    int t = 0;
    int i;
    vector<int> vi;
    for (int j = 0; j < v2.size(); j++)
    {
        gd(v2[j], vm[j]); //M1 , m1
        for (i = vp.size() - 1; i >= 0; i--)
        {
            int tm = s;
            s = t;
            t = tm - ((vp[i].ff / vp[i].ss) * t);
        }
        vi.pb(s);
        vp.clear();
        s = 1;
        t = 0;
    }
    int anss = 0;
    for (int i = 0; i < nn; i++)
    {
        anss += (va[i] * v2[i] * vi[i]);
    }
    cout << anss << endl;
}
