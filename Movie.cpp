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
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;

        int combo=min(a,b);
        int tikik=a-combo;
        int pop=b-combo;
        ll int total=(combo*e)+(tikik*c)+(pop*d);
        cout<<total<<endl;

    }
    

    return 0;
}