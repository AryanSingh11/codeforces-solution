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
    int capital=0;
    int small=0;
    for(auto i = s.begin(); i!=s.end(); i++){
        char c = *i;
        if(isupper(c)){
            capital++;
        }else{
            small++;
        }
    }
    if(capital>small){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout<<s<<endl;

    return 0;

}