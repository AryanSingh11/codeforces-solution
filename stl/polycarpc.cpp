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
        int k = (n/3);
        int ans1 = k;
        int ans2 =k;
        int m = (n%3);
        if(m==1){
            ans1++;
        }else if ( m==2){
            ans2++;
        }

        cout<<ans1<<" "<<ans2<<endl;
    }

    return 0;

}