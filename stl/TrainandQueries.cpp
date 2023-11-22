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

        map<int, pair<int, int>> m;
        for(int i = 0; i<l; i++){
            int a ;
            cin>>a;
            if(m.find(a) == m.end()){
                //doesnt exist
                m[a]=make_pair(i, i); 
                //first occ and last occ same
            }else{
                //exists //last occ update
                m[a].second = i;
            }
        }

        //queries
        for(int i = 0; i<q; i++){
            int a , b;
            cin>>a>>b;
            if(m.find(a) == m.end() ||
                m.find(b) == m.end() ||
                m[b].second<m[a].first){
                    cout<<"NO"<<endl;
            }else{
                cout<<"yes"<<endl;
            }
        }

    }

    return 0;

}