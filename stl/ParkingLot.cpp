#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long n){
    long long res = 1;
    while(n>0){
        if(n&1){
            res = res*a;
        }
        a = a*a;
        n >>= 1;
    }

    return res;
}

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long n ;
    cin>>n;

    long long middle = binpow(3, n-2);
    long long ans = 2*middle*4;
    cout<<ans<<endl;
        


  return 0;
}