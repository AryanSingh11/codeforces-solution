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

    string s;
    cin>>s;
    int count =0;
    for( auto i = s.begin(); i!= s.end(); i++){
        char c = *i;
        if(*i=='4' || *i=='7'){
            count++;
        }
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;

}