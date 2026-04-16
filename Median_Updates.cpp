#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n-1; i++)
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
        string s;
      
        int mx_lenth=1;
        int lenth=1;
        f
        {
            if(s[i]==s[i+1])
            {
                lenth++;
            }
            else
            {
                mx_lenth = max(mx_lenth, lenth);
                lenth=1;
            }

        }
        mx_lenth=max(mx_lenth,lenth);
        if(mx_lenth<=1) cout<<0<<endl;
        else cout<<(mx_lenth-1)/2<<endl;

    }
    

    return 0;
}