#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int a,b;
    cin>>a>>b;
    int op1=a+(a-1);
    int op2=b+(b-1);
    int op3=(a+b);
    int ma=max({op1,op2,op3});
    cout<<ma<<endl;

    return 0;
}