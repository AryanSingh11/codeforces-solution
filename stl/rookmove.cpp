#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long int t = 0;
    cin>>t;

    while(t--){
        string s ;
        cin>>s;

        int curr = int(s[1])-48;
        for(int i=1; i<=8; i++){
            if(i==curr) continue;
            cout<<s[0]<<i<<endl;
        }

        int currchar = s[0];
        for(int i=1; i<=8; i++){
            char thischar = char(96+i);
            if(thischar==currchar) continue;
            cout<<thischar<<s[1]<<endl;
        }


    }


  return 0;
}