#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int n,k;
    cin>>n>>k;
    int count[1001]={0};
    for(auto i=0;i<n;i++)
    {
        int val;
        cin>>val;
        count[val]++;
    }
    int op=0;
    for(auto i=0;i<k;i++)
    {
        if(count[i]==0)
        op++;
    }
    if(count[k]>0)
    op++;
    cout<<op<<endl;

    return 0;
}