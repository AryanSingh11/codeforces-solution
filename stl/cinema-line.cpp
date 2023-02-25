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
    vector<int> v;
    while(n--){
        int temp;
        cin>>temp;
        v.push_back(temp-25);
    }
    int collected =0;

    for(int x: v){
        if(x>collected){
            cout<<"NO"<<endl;
            return 0;
        }else{
            collected-=x;
        }
        collected+=25;
    }

    cout<<"YES"<<endl;
    return 0;

}