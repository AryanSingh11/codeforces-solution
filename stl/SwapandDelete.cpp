 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;

    while(t--){
        string  s;
        cin>>s;
        if(s.length()==1){
            cout<<1<<endl;
            continue;
        }
        int ss = s.length();
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<ss; i++){
            if(s[i]=='1'){
                ones++;
            }else{
                zeros++;
            }
        }
        if(ones==zeros){
            cout<<0<<endl;
        }else if( zeros == ss || ones == ss){
            cout<<ss<<endl;
        }else if(zeros>=1 && ones>=1 && (ones!=zeros)){
            int ans = 0;
            for(int i=0; i<ss; i++){
                if(s[i]=='1'){
                    zeros--;
                }else{
                    ones--;
                }

                if(zeros==0 || ones==0){
                    ans = (zeros+ones);
                    break;
                }
            }
            // cout<<<<endl;
        }else{
            cout<<ss<<endl;
        }

    }

  return 0;
}