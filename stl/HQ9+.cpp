#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ll binpow(ll b, ll p, ll m){
//     b %= m;
//     ll res = 1;
//     while(p>0){
//         if(p&1){//set bit
//             res = res*b%m;
//         }
//         b = b*b%m;
//         p >>= 1;
//     }

//     return res;

// }



int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;


  return 0;
}