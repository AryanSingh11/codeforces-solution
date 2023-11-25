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

    
    int n;
    cin>>n;
    string s;
    cin>>s;
    // cout<<s<<endl;  

    vector<int> ans;
    int freq = 0;
    char prev = s[0];
    for(int i = 1; i < n; i++){
        char curr = s[i];
        // cout<<curr<<endl;
        if(curr == prev){
            freq++;
            //cout<<freq<<endl;
        }else{
            ans.push_back(freq);
            freq = 0;
            prev = curr;
        }
    }
    ans.push_back(freq);
    sort(ans.begin(), ans.end());

    int anss = 0;
    for(auto x: ans){
        //cout<<x<<" ";
        anss+=x;
    }
    //cout<<endl;

    // cout<<ans[ans.size()-1]<<endl;
    cout<<anss<<endl;

    return 0;

}