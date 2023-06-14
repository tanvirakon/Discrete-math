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
    // vscodeonly();
    errortxt();
}
int32_t main()
{
    yoyochikichiki();
    string s;
    cin >> s;
    int n = s.length();
    int x = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] - '0' < s[i + 1] - '0')
        {
            x = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] - '0' > s[x] - '0')
        {
            swap(s[i], s[x]);
            break;
        }
    }
    sort(s.begin() + x+1, s.end());
    cout<<s;
}
