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
        int a[n],b[n],c[n],d[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        int z=d[0];
        int x=c[1];
        int y=b[2];
        int v=a[3];
        vector<int>arr={z,x,y,v};
        sort(arr.begin(),arr.end());
        cout<<abs(arr[3]-arr[0])<<endl;
    }
    

    return 0;
}