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
        for(int i=0;i<n;i++){
            int k;
            cin>>v[i];
        }
        long long last = 0;
        long long ans = 0;
        for(int i=0;i<n;i++){
            if(v[i]>last){
                ans+=abs(v[i] - last);
            }
            last = v[i];
        }

        cout<<ans-1<<endl;
       
     
        

    }

    return 0;

}