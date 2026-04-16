#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    ll int n;
    cin>>n;
    if(n<5)
    {
        cout<<(n*100)<<endl;
    }
    else
    {
       ll int sum=(n*100)*0.85;
        cout<<sum<<endl;
    }

    return 0;
}