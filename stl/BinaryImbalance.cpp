#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long int t = 0;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;

        int ones = 0;
        int zeros = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                ones++;
            }else{
                zeros++;
            }
        }
        if(ones<zeros){
            cout<<"YES"<<endl;
            continue;
        }

        bool flag = false;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
        


  return 0;
}