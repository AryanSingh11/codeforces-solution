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
    for(int i =0; i< t; i++){
        vector<int> v;
        for(int j=0; j< 4; j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        vector<int> vdash;
        for(int i=0; i<4; i+=2){
            int ltemp = max(v[i], v[i+1]);
            vdash.push_back(ltemp);
        }

        sort(v.begin(), v.end());
        sort(vdash.begin(), vdash.end());

        if(vdash[0]==v[2] && vdash[1]==v[3]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
    }

    return 0;

}