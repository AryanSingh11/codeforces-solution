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
    while(n--){
        int l ;
        cin>>l;
        int q;
        cin>>q;

        // map<int, pair<int, int>> m;
        multimap<int, int> m;
        for(int i = 0; i<l; i++){
            int a ;
            cin>>a;
            m.insert(pair<int, int>(a, i));
        }

        //queries
        for(int i = 0; i<q; i++){
            int a , b;
            cin>>a>>b;
            auto alower = m.lower_bound(a);
            auto bupper = m.upper_bound(b);
            bupper--;
            if(m.find(a) == m.end() ||
                m.find(b) == m.end() ||
                bupper->second<alower->second){
                    cout<<"NO"<<endl;
            }else{
                cout<<"yes"<<endl;
            }
        }

    }

    return 0;

}