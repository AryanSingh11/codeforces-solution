#include<bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int  n;
    cin>>n;
    string s;
    cin>>s;
    string l = s.substr(0, n);
    string r = s.substr(n+1, 2*n);
    bool strictly_less = true;
    bool strictly_more = true;
    for(int i =0; i<n; i++){
        if(l[i]>= r[i]){
            strictly_less= false;
            break;
        }
    }

    for(int i =0; i<n; i++){
        if(l[i]<= r[i]){
            strictly_more= false;
            break;
        }
    }

    cout<<((strictly_less || strictly_more)? "YES" : "NO") ;
    cout<<endl;

    return 0;

}