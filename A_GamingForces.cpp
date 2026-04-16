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
        int a[n];
        int count=0;
        int op=0;
        f cin>>a[i];
        f{
            if(a[i]==1)
            count++;
            else
            op++;

            
        }
        cout<<(count+1)/2+op<<endl;
    }
    

    return 0;
}