#include<bits/stdc++.h>
#include<array>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int> m;
    while(t--){
        string s;
        cin>>s;
        if(m.find(s)==m.end()){
            m[s]=0;
        }else{
            m[s]+=1;
        }
    }
    int maxval=-89;
    string ss;
    for(auto iter = m.begin(); iter != m.end(); iter++){
        pair<string, int> p = *iter;
        if(p.second> maxval){
        maxval = p.second;
        ss= p.first;

        }
    }
    cout<<ss<<"\n";
}