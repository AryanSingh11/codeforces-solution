//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int y;
    cin>>y;
    string s;
    set<char> sett;
    //cout<<sett.size()<<endl;
    while(sett.size()!= 4){
        y++;
         s = to_string(y);
        sett.clear();
        for(auto i = s.begin(); i != s.end(); i++){
        sett.insert((*i));
        }

        //cout<<sett.size()<<endl;
        
    }
    cout<<s<<endl;
    

}