#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s ;
    cin>>s;
    // cout<<s<<endl;
    char prev = s[0];
    int cnt = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == prev){
            cnt++;
            if(cnt>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            prev = s[i];
            cnt = 1;
        }
    }

    cout<<"NO"<<endl;


  return 0;
}