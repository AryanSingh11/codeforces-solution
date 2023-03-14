#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

bool ispalindrome(string s ){
    string original = s;
    reverse(s.begin(), s.end());
    if(s==original){
        return true;
    }
    return false;
}


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int inputs = (2*n)-2;
        vector<pair<int, string>> v;
        for (int i = 0; i < inputs; i++)
        {
            string temp;
            cin>>temp;
            int lenght = temp.size();
            v.push_back(make_pair(lenght, temp));
        }
        sort(v.begin(), v.end());
        int ss = v.size();
        pair<int,string> fp = v[0];
        pair<int,string> lp = v[ss-1];
        string fps = fp.second;
        string lps = lp.second;
        string s1 = fps+lps;
        string s2 = lps+fps;
        if(ispalindrome(s1) || ispalindrome(s2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;

}