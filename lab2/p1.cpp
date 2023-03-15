#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define nn 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define f0(n) for(int i=0;i<n;i++)
#define f1(n) for(int i=1;i<n;i++)
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
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
void yoyochikichiki()
{
    rock_lee();
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
}


bool func1(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if ((a[i] * a[i]) - b[j] >= 3) return false;
        }
    }
    return true;
}

bool func2(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < b.size(); j++)
        {
            if ((a[i] * a[i]) - b[j] < 3)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return false;
    }
    return true;
}

bool func3(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < b.size(); j++)
        {
            if ((a[i] * a[i]) - b[j] >= 3) flag = 1;
        }
        if (flag == 0) return true;
    }
    return false;
}

bool func4(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < b.size(); j++)
        {
            if ((a[i] * a[i]) - b[j] < 3) flag = 1;
        }
        if (flag == 1) return true;
    }
    return false;
}

int main()
{
    // yoyochikichiki();
    cout << "how much number for x array ";
    int x;
    cin >> x;
    cout << x << " x array elements " << endl;
    vector<int> a(x);
    f0(x) cin >> a[i];
    cout << "how much number for y array ";
    int y;
    cin >> y;
    cout << x << " y array elements " << endl;
    vector<int> b(y);
    f0(y) cin >> b[i];

    //1
    cout << (func1(a, b) == true ? "yes\n" : "NO\n");

    //2
    cout << (func2(a, b) == true ? "yes\n" : "NO\n");

    //3
    cout << (func3(a, b) == true ? "yes\n" : "NO\n");

    //4
    cout << (func3(a, b) == true ? "yes\n" : "NO\n");

}
