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

    int n;
    cin>>n;
    int count=0;
    while(n--){
        string s;
    cin>>s;

    int pos = s.find('X');
    //cout<<pos<<endl;
    vector<char> v(s.begin(), s.end());
    v.erase(v.begin()+pos);

    for(int i =0; i<v.size(); i+=2){
        if(v[i]=='-'){
            count--;
        }else if( v[i]=='+'){
            count++;
        }
    }
    // for(char c: v){
    //     cout<<c<<" ";
    // }

    }
    
    cout<<count<< endl;

    return 0;

}