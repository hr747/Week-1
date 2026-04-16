#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    ll int t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll int n,k;
        cin>>n>>k;
        vector<ll int>v(n);
        f cin>>v[i];
        sort(v.begin(),v.end());
        int m=n-k;
       
        int st=(m-1)/2;
        int en=(n-1)-(m-1)/2;
        for(auto i=st;i<en;i++)
        {cout<<v[i]<<" ";}
        cout<<endl;

    }
    

    return 0;
}