#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

int MOD = 1000000007;


    long long int a, b, t;
    cin >> a >> b >> t;
    long long int s[] = {a, b, b - a, -a, -b, a - b};
    cout << (s[(t - 1) % 6] % MOD + MOD) % MOD;
    return 0;

    // long long int x, y, n;
    // long long int MOD = 1000000007;
    // cin>>x>>y>>n;
    // //cout<<x<<y<<n<<endl;
    // map<long long int, long long int> m;
    // m[1]= x;
    // m[2]=y;
    // m[3]=y-x;
    // m[4]=-x;
    // m[5]=-y;
    // m[6]=x-y;

    // n =(n%6);
    // long long int ans = m[n];

    // bool neg = false;

    // // if(ans < 0 ){
    // //     neg = true;
    // // }

    // //     int modd = abs(ans)%1000000007 ;
    // // if(neg){
    // //     cout<<(1000000007 - modd)<<endl;
    // // }else{
    // //     cout<<modd<<endl;
    // // }

    // //cout<<((ans% MOD)+MOD)%MOD<<endl;
    // cout<<(((((ans%MOD)+MOD)%MOD)+MOD)%MOD)*1LL<<endl;



    return 0;

}