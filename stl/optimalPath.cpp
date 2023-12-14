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

    //long long
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long colsum = 0;
        long long colsum2 = 0;
        for(long long i=1; i<=n; i++){
            colsum += m;
            colsum2 += colsum;
            // cout<<colsum<<endl;
        }
        // cout<<colsum2<<endl;

        long long rowsum = 0;
        for(long long i=1; i<m; i++){
            rowsum += i;
            // cout<<rowsum<<endl;
        }
        // cout<<rowsum<<endl;
        long long ans = rowsum + colsum2;
        cout<<ans<<endl;
    }

    return 0;

}