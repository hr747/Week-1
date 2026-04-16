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
        for(auto i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>b(n);
         for (int i = 0; i < n; i++) {
            b[i] = n + 1 - v[i];
        }
       
        for(auto i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}