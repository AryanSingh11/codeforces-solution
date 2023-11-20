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

    int n ;
    cin>>n;
    while(n--){
        double x;
        cin>>x;

        int logged = log10(x);
        //cout<<logged<<endl;

        int raisedtopower = pow(10,logged);
        // cout<<raisedtopower<<endl;
        // cout<<endl;
        int ans = static_cast<int>(x) - raisedtopower;
        cout<<ans<<endl;

    }
    return 0;

}