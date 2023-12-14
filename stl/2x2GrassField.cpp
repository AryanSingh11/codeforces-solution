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
        vector<vector<int>> v(2, vector<int>(2, 0));
        int sum = 0;
        for(int i= 1; i<=2; i++){
            for(int j=1; j<=2; j++){
                int temp;
                cin>>temp;
                // cout<<temp<<" ";
                sum+=temp;
            }
        }
        // cout<<endl;

        if(sum==0){
            cout<<0<<endl;
        }else if(sum==1){
            cout<<1<<endl;
        }else if(sum==2){
            cout<<1<<endl;
        }else if(sum==3){
            cout<<1<<endl;
        }else if(sum==4){
            cout<<2<<endl;
        }

        // cout<<endl;
    }

    return 0;

}