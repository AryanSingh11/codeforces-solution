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
        
        int time=0;
        int prevtime=0;
        int totalwalktime=0;
        vector<int> v(n+2,0);
        v[0]=0;
        v[n+1]=1440;
        
        
        for(int i=1; i<n+1; i++){
            int temp;
            cin>>temp;
            v[i]=temp;
        }
        
        int diff=0;
        for(int i =1; i<= n+1; i++){
             diff = v[i]-v[i-1];
            if(diff>=120){
                totalwalktime+=diff;
            }
        }

        if(totalwalktime>=240){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    //cout<<"dang"<<endl;
    return 0;

}