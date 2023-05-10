#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define all(_a) _a.begin(), _a.end()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif
#define rock_lee()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

void yoyochikichiki()
{
    rock_lee();
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
}

int32_t main()
{
    // yoyochikichiki();
    freopen("inputnumbers.txt", "r", stdin);
    int array[200000];
    int n = 200000;
    for (int i = 0; i < n; i++)
        cin >> array[i];
    clock_t start = clock();
    // bubble sort(n ^ 2)
    //  for (int i = 0; i < n - 1; i++)
    //  {
    //      for (int j = 0; j < n - i - 1; j++)
    //      {
    //          if (array[j] > array[j + 1])
    //              swap(array[j], array[j + 1]);
    //      }
    //  }

    // n * log(n)
    sort(array, array + n);

    clock_t end = clock();
    cout << end << " " << start << " ";
    cout << (float)(end - start) / CLOCKS_PER_SEC << endl;
}
