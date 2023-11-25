#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;


static void makesum(map<int, int> & m, vector<int>& v){
    m.clear();
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
        // m[i] = sum;
        m[sum] = i;
    }
}

// static void makesum2(map<int, int> & m, vector<int>& v, int index){
    
//     for(int i=0; i<v.size(); i++){
//         sum += v[i];
//         // m[i] = sum;
//         m[sum] = i;
//     }
// }

static bool findSum(map<int, int> & m, vector<int>& v, int target){
    if(m.find(target) != m.end()){
        return true;
    }
    for(auto i : m) {
        int sumtillnow = i.first;
        if(target>sumtillnow){
            continue;
        }else if(target==sumtillnow){
            return true;
            //cout<<"target was eq to sum till now "<<endl;

        }else{ //target<sumtillnow
            int prev = sumtillnow-target;

            //cout<<"the prev is: "<<prev<<endl;

            if(m.find(prev) != m.end()){
                return true;
            }
        }

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
        int n, q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        map<int, int> m;

        makesum(m, v);

        // cout<<"sum map fromed is"<<endl;
        // for(auto p : m){
        //     cout<<p.first<<"-> "<<p.second<<endl;
        // }
        // cout<<endl;


        //queries
        bool was2there = false;

        for(int i=0; i<q; i++){
            int a;
            cin>>a;
            if(a==1){
                int target;
                cin>>target;

                if(was2there==true){
                    makesum(m, v);
                    was2there=false;
                }
                bool localans = findSum(m, v, target);

                if(localans==true){
                    cout<<"YES"<<endl;    
                }else if(localans==false){
                    cout<<"NO"<<endl;
                }
                
            }else if(a==2){
                // m.clear();
                int indexi, rep;
                cin>>indexi>>rep;
                //replace
                v[indexi-1]=rep;
                was2there = true;

                // makesum(m, v);

                // cout<<endl;
                // cout<<"new sum map fromed is"<<endl;
                // for(auto p : m){
                //     cout<<p.first<<"-> "<<p.second<<endl;
                // }
                // cout<<endl;
            }
        }

    
    }

    return 0;

}