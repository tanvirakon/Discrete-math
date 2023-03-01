#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define f0(n) for(int i=0;i<n;i++)
#define f1(n) for(int i=1;i<n;i++)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "<<x<<endl;
#else
#define debug(x)
#endif
#define rock_lee(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
int  BigMod(int  b, int p, int m)
{
    if (p == 0) return 1;
    int x = BigMod(b, p / 2, m);
    x = (x * x) % m;
    if (p % 2 == 1) x = (x * b) % m;
    return x;
}
void yoyochikichiki() {
    rock_lee();
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
}
int32_t main() {
    yoyochikichiki();
    int t; cin >> t;
    while (t--) {
        int sum = 0, flag = 1;
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b;
        f0(n) cin >> a[i];
        b = a;
        sort(b.begin(), b.end()) ;
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        else {
            int sum1 = 0;
            if (a[0] != b[0]) {
                sum = b[n - 1] - a[0];
                sum1 = a[n - 1] - b[0];
                cout << max(sum, sum1) << endl;
            }
            else {
                cout << b[n - 1] - b[0] << endl;
            }
        }

    }

}
