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
        int curr=0;
        int prev=0;
        int j;
        for(j=0; j<n; j++){
            curr++;
            if(curr%3==0 || curr%10==3){
                j--;
            }
        }
        cout<<curr<<endl;



    }

    return 0;

}