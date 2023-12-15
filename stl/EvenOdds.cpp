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

    ll n, k;
    cin>>n>>k;

    ll odds, evens = 0;
    if(n%2){
        //odd
        odds = (n/2)+1;
        evens = n/2;
    }else{
        odds = evens = n/2;
    }
    // cout<<odds<<" "<<evens<<endl;

    ll ans = 0;
    if(k<=odds){
        ans = 1 + (k-1)*2;
    }else{
        k = (k-odds);
        ans = 2 + (k-1)*2;
    }

    cout<<ans<<endl;

    


  return 0;
}