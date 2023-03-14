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
        int sum=0;
        for(int j=0; j< n; j++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        if(sum==n){
            cout<<0<<endl;
        }else if(sum < n){
            cout<<1<<endl;
        }else if(sum >n){
            cout<<(sum-n)<<endl;
        }
    }

    return 0;

}