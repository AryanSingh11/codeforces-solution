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

    int n;
    cin>>n;
    map<int, int> m; //int -> freq
    vector<int> v(n, 0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    int elem = 0;
    vector<int> minarray;
    int freq = INT_MAX;
    for(auto x : m){
        if(x.second <= freq){
            elem = x.first;
            freq = x.second;
        }
    }
    cout<<"elem: "<<elem<<endl;
    cout<<"freq: "<<freq<<endl;
        


  return 0;
}