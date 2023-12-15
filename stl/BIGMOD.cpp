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

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll b,p, m;

    ll ans = binpow(b, p, m);

    cout<<ans<<endl;

    
        


  return 0;
}