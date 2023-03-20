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

    int n, m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0; i<m; i++)   {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    // for( int x: v){
    //     cout<<x<<endl;
    // }
    int time =0;
    int currpos =1;
    for(int i=0; i<m; i++){
        if(v[i]>=currpos){
            int timeused = (v[i]-currpos);
            time+=timeused;
            currpos=v[i];
            //cout<<"if"<<endl;
        }else if ( v[i]<currpos){
            time+= n-(currpos-v[i]);

            currpos=v[i];
            //cout<<"elseif1"<<endl;
        }
    }
        
        cout<<time<<endl;



    

    return 0;

}