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

    
    string a , b;
    string ans="";
    cin>>a>>b;
    for(int i=0; i<a.size(); i++){
        ans+=to_string(((a[i]-48)^(b[i]-48)));
    }
    cout<<ans<<endl;

    return 0;

}