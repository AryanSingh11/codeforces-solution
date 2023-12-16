 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;
        int ans = max(n,m);
       
        cout<<ans<<endl;
    }
        


  return 0;
}