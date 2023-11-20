#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

static string findmin(string currstring){
    int a = stoi(currstring);
    a = min(a, 9-a);
    string ans = to_string(a);

    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long x;
    cin>>x;

    string s = to_string(x);

    string finalans = "";

    for(int i =0; i<s.size(); i++){
        string currstring = s.substr(i, 1);
        string temp = findmin(currstring);
        finalans.append(temp);
    }

    if(finalans[0]=='0'){
        finalans[0]='9';
    }

    cout<<finalans<<endl;
    

    return 0;

}