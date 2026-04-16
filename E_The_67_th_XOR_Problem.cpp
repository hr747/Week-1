#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){cin>>v[i];}
        int ans=0;
        for(auto i:v)
        {
            for(auto j:v)
            {ans=max(ans,i^j);}
        }
        cout<<ans<<endl;
        
    }
    

    return 0;
}