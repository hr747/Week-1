#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    string s;
    cin>>s;
    int count[26]={0};
    for(auto c:s)
    {
        count[c-'a']++;

    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        {
         char result =i+'a';
         cout<<result<<endl;
            return 0;
        }

    }
cout<<"None"<<endl;
    return 0;
}