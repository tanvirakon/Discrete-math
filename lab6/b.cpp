#include <bits/stdc++.h>
using namespace std;

#define all(_a) _a.begin(), _a.end()

int checkfunction(int b, int n, int nm)
{
    int t1 = (n - 1) % (nm - 1);
    int t2 = pow(b, t1);
    int ans = t2 % nm;
    return ans;
}
int main()
{
    // psudoprime
    int n, b, i, j, k, sm = 0;
    cin >> b >> n;
    vector<int> pf;
    int n1 = n;
    while (n1 != 1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n1 % i == 0)
            {
                pf.pb(i);
                n1 /= i;
                break;
            }
        }
    }
  
    sort(all(pf));
    auto it = unique(all(pf));
    pf.resize(distance(pf.begin(), it)); // just protita element 1bar kre nea hlo...jeta just set use krlei prtm

    bool f = 1;
    for (i = 0; i < pf.size(); i++)
    {
        int ans = checkfunction(b, n, pf[i]);
        cout << ans << endl;
        if (ans > 1)
        {
            f = 0;
            break;
        }
    }
    if (f)
        cout << "pseudo primme" << nn;
    else
        cout << "Not pseudoprime" << nn;
    return 0;
}
