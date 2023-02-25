//https://codeforces.com/problemset/problem/227/B
//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    

    
    int n;
    cin>>n;
    vector<int>v(3);
    for (int i =0; i< n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    //sort(v.begin(), v.end());
    int m;
    cin>>m;
    vector<int>q(m) ;
    for (int i =0; i< m; i++){
        int qtemp;
        cin>>qtemp;
        q.push_back(qtemp);
    }
    

    int vasya=1;
    int petya=1;
    for(int k =0; k< q.size(); k++){
        for( auto i = v.begin(); *i!= q[k]; i++ ){
        vasya++;
        cout<<vasya<<endl;
        }
        for( auto i = v.end()-1; *i!= q[k]; i-- ){
        petya++;
        }
    }

    // vasya+=(m-1);
    // petya+=(m-1);
    int addition = m-1;
    cout<<vasya<<" "<<petya+addition<<"\n";
    //cout<<vasya<<" "<<petya<<"\n";


    

    return 0;

}