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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> fec(26, 0);
        for(char c:s)
        fec[c-'a']++;
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(fec[i]%2!=0)
            count++;
        }
        if(count<=k+1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}