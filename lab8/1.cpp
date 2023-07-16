//last lab

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
#define fast()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
void vscodeonly(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void errortxt(){
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
   int n;cin>>n;
   int array[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       array[i][j]=0;
    }
   }
    int a,b;
    for(int i=0;i<n;i++){
       
            cin>>a>>b;
            array[a-1][b-1]=1;
            array[b-1][a-1]=1;
        
    }
    cout<<"adj matrix\n";
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<array[i][j]<<" ";
    }
    cout<<endl;
   }

   cout<<"adj. list\n";
 
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(array[j][k]==1) cout<<k+1<<" ";
        }
        cout<<endl;
    }
   


}
