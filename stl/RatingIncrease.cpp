 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;

    while(t--){
        string ab ;
        cin>>ab;
        int ss = ab.length();
        int mid = ss/2;
        string a = ab.substr(0, mid);
        string b = ab.substr(mid, ss);
        // cout<<a<<" "<<b<<endl;
        int first = stoi(a, nullptr, 10);
        int second = stoi(b, nullptr, 10);
        // cout<<first<<" "<<second<<endl;
        bool flag = true;
        while(first>=second || b[0]=='0' ){
            mid--;
            if(mid<=0){
                // cout<<-1<<endl;
                flag = false;
                break;
            }else{
                a = ab.substr(0, mid);
                b = ab.substr(mid, ss);
                // cout<<"mid "<<mid<<endl;
                // cout<<a<<" "<<b<<endl;

                first = stoi(a, nullptr, 10);
                second = stoi(b, nullptr, 10);
            }
        }

        // cout<<mid<<endl;
        // cout<<"b: "<<b<<endl;
        // cout<<"ab: "<<ab<<endl;
        // cout<<flag<<endl;

        if(flag==false){
            cout<<-1<<endl;
        }else{
            // cout<<"final:"<<endl;
            cout<<a<<" "<<b<<endl;
        }
        


    }

  return 0;
}