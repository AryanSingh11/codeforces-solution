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

    vector<long long> v(4,0);    
    for(int i=0; i<=3; i++){
        long long temp;
        cin>>temp;
        v[i]=temp;
    }
    sort(v.begin(), v.end());
    int count=1;
    for(int i=0; i<=2; i++){
        if(v[i]!=v[i+1]){
            count++;
        }
    }

    cout<<4-count<<endl;
    return 0;

}