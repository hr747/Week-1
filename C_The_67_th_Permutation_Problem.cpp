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
        for(auto i=1;i<=n;i++)
        {
            int median = n + (2 * i) - 1;
            int boro = n + 2 * i;
            cout<<i<<" "<<median<<" "<<boro<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}