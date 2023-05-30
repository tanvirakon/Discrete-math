#include <bits/stdc++.h>
using namespace std;
#define all(_a) _a.begin(), _a.end()

int req(int a,int b){
    int s,t;
    if(b==0){
        s=1;
        t=0;

    }
    else{

    }
}

int32_t main()
{
    // yoyochikichiki();
    int a, b;
    cin >> a >> b;
    int c, d;
    c = a;
    d = b;
    vector<int> a1;
    vector<int> a2;
    while (a != 1)
    {
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                a1.push_back(i);
                a /= i;
                break;
            }
        }
    }

    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";
    cout << endl;
    while (b != 1)
    {
        for (int i = 2; i <= b; i++)
        {
            if (b % i == 0)
            {
                a2.push_back(i);
                b /= i;
                break;
            }
        }
    }

    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";
    cout << endl;

    int sum = 1;
    for (int i = 0; i < a1.size(); i++)
    {

        for (int j = 0; j < a2.size(); j++)
        {
            auto it = find(all(a2), a1[i]);
            if (it != a2.end())
            {
                sum *= a1[i];
                a2.erase(it);
                break;
            }
        }
    }
    cout << "gcd " << sum << endl;
    cout << "lcm " << (c * d) / sum << endl;



}
