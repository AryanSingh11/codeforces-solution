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
        int n,x;
        cin>>n>>x;
        vector<int> dist;
        vector<int> pump(n);
        for(int i=0;i<n;i++){
            cin>>pump[i];
        }
        int diff1 = pump[0];
        dist.push_back(diff1);
        int diff2 = 2*(x-pump[pump.size()-1]);
        dist.push_back(diff2);

        //find max diff
        for(int i=1;i<n;i++){
            int  k = pump[i]-pump[i-1];
            dist.push_back(k);
        }

        sort(dist.begin(),dist.end());
        cout<<dist[dist.size()-1]<<endl;

    }

    return 0;

}