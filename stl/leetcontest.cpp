#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

bool hasfreqtwo(map<int, int>& m){
        int ss = m.size();
        for(int i =1; i<=ss; i++){
            if(m[i]>=2){
                return true;
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


    int n; //no of players
    int k; //passed
    cin>>n>>k;
        vector<int> ans;
        set<int> ansset;
        map<int, int> m;
        for(int i =1; i<=n; i++){
            m[i]=0;
            ans.push_back(i);
            ansset.insert(i);
        }
        
        int curr = 1;
        int multiplier=1;
        m[curr]++;
        while(!hasfreqtwo(m)){
            int forward = multiplier*k;
            cout<<"curr foorward "<<forward<<endl;
            curr+=forward;
            while(curr>n){
                cout<<"curr in loop "<<curr<<endl;
                curr-=n;
            }
            m[curr]++;
            multiplier++;
        }

        cout<<"ans: "<<endl;
        for(int i =1; i<= n; i++){
            if(m[i]==0){
                cout<<i<<" ";
            }
        }

        cout<<"end"<<endl;
    }