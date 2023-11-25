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
    map<int, int> freq;
    map<int, int> opens; //1 opens 2
    map<int, bool> opened; //1 opens 2
    set<int> bottle;
    
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        //freq
        freq[a]++;

        //opens
        opens[a] = b;

        //opened
        opened[a] = false;

        //insert unique
        bottle.insert(a);
    }

    //open the bottles
    for(auto x: opens){
        int bottle1 = x.first;
        int bottle2 = x.second;
        if(bottle1!=bottle2){
            //bottle1woould open bottle2
            opened[bottle2] = true;
        }
    }
    
    int ans = 0;
    //opened mein already sare elems hai
    //find ones that arent opened
    for(auto x: opened){
        int currbottle = x.first;
        bool isopen = opened[currbottle];
        if(isopen==true){
            continue;
        }else{
            //not opened yet
            ans+=freq[currbottle];
        }
    }

    cout<<ans<<endl;

    return 0;

}