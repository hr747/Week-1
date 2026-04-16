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
    
     long long int sum=0;
    for(auto i=0;i<n-1;i++)
   { ll int r;
    cin>>r;
sum+=r;}
ll int total=(n*(n+1)/2);
cout<<abs(total-sum)<<endl;
    

    return 0;
}