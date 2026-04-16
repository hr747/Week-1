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
        vector<int>v;
        int a=1;
        int b=3;
        
        for (auto i=0;i<n;i++)
        {
            v.push_back(a*b);
            a+=2;
            b+=2;
            
        }
        for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }
    

    return 0;
}