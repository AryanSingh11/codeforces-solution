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
        int n;
        cin>>n;
        int even =0;
        int odd = 0;
        //int half=(n/2);
        for(int j=0; j< 2*n; j++){
            
            int temp;
            cin>>temp;
            if(temp&1){
                //odd
                odd++;
            }else{
                even++;
            }
        }

        if(odd==n && even == n){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
    }

    return 0;

}