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

        // if(n==0 || n==1 || n==2){
        //     cout<<"n "<<n<<endl;
        //     cout<<"YES"<<endl;
            
        // }

        map<char, int> m;
        string s ;
        cin>>s;
        int ss = s.length();
        bool distracted = false;
        char prev=s[0];
        char curr=s[1];
        m.insert({prev, 0});
        for(int j=0; j<ss; j++){
            curr = s[j];
            
            if(prev!=curr){
                if(m.find(curr)==m.end()){
                    m.insert({curr, j});
                }else{
                    distracted=true;
                    break;
                }
            }
        }

        if(distracted){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }

    return 0;

}