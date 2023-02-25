//https://codeforces.com/problemset/problem/32/B

#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s ;
    cin>>s;
    vector<char> v(s.begin(), s.end());
    string r;
    for (int i = 0; i < v.size() ; i++)
    {
        if(v[i]=='.'){
           r.append(to_string(0));
        }else if(v[i]=='-'&& v[i+1]=='.'){
            r.append(to_string(1));
            i++;
        }else if(v[i]=='-'&& v[i+1]=='-'){
            r.append(to_string(2));
            i++;
        }
    }
    cout<<r<<"\n";
    

}