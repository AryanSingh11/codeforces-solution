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
        int n, k = 0;
        cin>>n>>k;

        vector<int> v(n, 0);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        // //check 
        //     vector<int> temp = v;
        //     sort(temp.begin(), temp.end());
        //     if(temp==v){
        //         cout<<"YES"<<endl;
        //         continue;
        //     }

        bool flag = false;
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                flag = true;
            }
        }

        if(flag && k==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
        


  return 0;
}