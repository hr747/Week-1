#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
       int S, T;
    cin >> S >> T;
    
    int count = 0;
    
    
    for (int i = 0; i <= S; i++) {
        
        for (int j = 0; j <= S - i; j++) {
           
            for (int k = 0; k <= S - i - j; k++) {
                
                if (i * j * k <= T) {
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
    

    return 0;
}