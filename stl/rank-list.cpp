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

    int n,k;
    cin>>n>>k;
    map<int, pair<int,int>> m;
    while(n--){
        int problems;
        int time;
        //int freq;
        cin>>problems>>time;
        pair<int,int> temp ;
        temp.first= time;
        temp.second = (m[problems].second)+1;
        m[problems]=temp;

    }

    
    int rankcount=0;
    int prevrankcount=0;
    int size = m.size();
    for(auto i = 0; i<size; i++){
        int tempfreq= m[size-i].second;
        prevrankcount=rankcount;
        rankcount+=tempfreq;
        if(rankcount<=tempfreq &&(tempfreq>prevrankcount))
        {
            cout <<size-i<<endl;
            break;
        }

    }
    
    for(auto x: m){
        cout<<x.first<<" "<<x.second.first<<" "<< x.second.second <<endl;
    }

    return 0;

}