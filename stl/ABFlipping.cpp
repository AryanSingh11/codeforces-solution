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

    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f = s.find_first_of("A");
        int l = s.find_last_of("B");

        int ans =  l-f;
        if(ans<0){
            ans = 0;
        }
        cout<<ans<<endl;

    }

    return 0;

}