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

    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l = 3;
        set<char> sett;
        int ans =0;
        for(int i=0; i<s.length(); i++){
            sett.insert(s[i]);
            if(sett.size() == 4){
                ans++;
                sett.clear();
                sett.insert(s[i]);
            }
        }

        if(sett.size() > 0){
            ans++;
        }

        cout<<ans<<endl;

    }

    return 0;

}