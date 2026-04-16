#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 1; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    ll int n;
    cin>>n;
    ll int count=0;
   
    vector<ll int>v(n);
   
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
      ll int mx=v[0];
    f1
    {
        if(v[i]<mx)
        {
            count+=(mx-v[i]);

        }
        else
        mx=v[i];
      

    }
    cout<<count<<endl;

    return 0;
}