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
        vector<int> v(n);
        set<int> s;
        for(int i=0;i<n;i++){
            int k;
            cin>>v[i];
            s.insert(v[i]);
        }
        //checks
        vector<int> temp = v;
        sort(temp.begin(), temp.end());
        // if(s.size()<n || temp[temp.size()-1]>n){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        int last = 0;
        for(int i = 1; i<n-1;i++){
            if(v[i-1]<v[i] && v[i]>v[i+1] ){
                swap(v[i], v[i+1]);
            }
        }

        //print
        // for(int i=0;i<n;i++){
        //     cout<<v[i];
        // }
        // cout<<endl;

        string ans = "NO";
        if(v==temp){
            // cout<<"YES"<<endl;
            ans="YES"  ;
        }

        if(s.size()<n || temp[temp.size()-1]>n){
            // cout<<"NO"<<endl;
            ans = "NO";
            
        }

        cout<<ans<<endl;
    }

    return 0;

}