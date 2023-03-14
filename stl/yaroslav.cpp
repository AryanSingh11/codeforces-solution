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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    int ss = s.size();
    int minreqd = (n+1)/2;
    
        if(ss >= (minreqd)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    
    


    return 0;

}