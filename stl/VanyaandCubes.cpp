#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    if(t==1){
        cout<<1<<endl;
    }

    vector<int> v(10000, 0);
    v[0]=1;
    for(int i=1; i<t; i++){
        v[i] = v[i-1]+(i+1);
        if(i>t){
            break;
        }
    }

    // for(int x: v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    int sum = 0;
    for(int i=0; i<t; i++){
        sum += v[i];
        // cout<<sum<<endl;
        if(sum>t){
            cout<<i<<endl;
            break;
        }
    }
        


  return 0;
}