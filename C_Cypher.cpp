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
        for(auto i=0;i<n;i++)
        {
            int b;
            cin>>b;
            string s;
            cin>>s;

        
        for(char move :s)
        {
            if(move=='U')
            {
                v[i]=(v[i]-1+10)%10;
            }
           else if(move=='D')
            {
                v[i]=(v[i]+1)%10;
            }
        }
    }
    for(auto i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
    

    return 0;
}