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
    
    
    int n[7];
    int sum=0;
    for(auto i=0;i<7;i++)
    {
        cin>>n[i];
        sum+=n[i];

    }
    int ans=-20000000;
        for(auto i=0;i<7;i++)
        {
            int courent=(sum-n[i])*-1+n[i];
            if(courent>ans)
            {
                ans=courent;
            }
        }
        cout<<ans<<endl;

}

    return 0;
}