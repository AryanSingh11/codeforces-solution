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
    vector<int> v;
    vector<char> ss(s.begin(), s.end());
    for(auto x= ss.begin(); x!=ss.end(); x++){
        if(*x=='+'){
            ss.erase(x);
        }
    }
    sort(ss.begin(), ss.end());
    for(auto x= ss.begin(); x!=ss.end(); x++){
        if(x==(ss.end()-1)){
            cout<<*x<<endl;
        }else{
        cout<<*x<<"+";
        }
    }
    //cout<<endl;


    return 0;

}