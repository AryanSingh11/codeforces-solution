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

    string s ;
    cin>>s;
    int c = s.find('0');
    if(c==-1){
        cout<<s.substr(1)<<endl;
    }else{
        cout<<s.substr(0,c)<<s.substr(c+1);
    }


    return 0;

}