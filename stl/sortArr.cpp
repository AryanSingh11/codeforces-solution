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
    vector<int> v(n);
    vector<int> c(n);
    
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    c=v;
    //if already sorted
    bool sorted= true;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]<=v[i+1]){
            continue;
        }else{
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout<<"yes"<<endl;
        cout<<n-1<<" "<<n-1<<endl;
        return 0;
    }
    


    // sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    


    // int mini=INT_MAX;
    // int maxi=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if(v[i]!=c[i]){
    //         mini = min(mini, i);
    //         maxi= max(maxi, i);
    //     }
    // }
    
    // if(mini==INT_MAX && maxi==INT_MIN){
    //     cout<<"no"<<endl;
    // }else{
    //     cout<<"yes"<<endl;
    //     cout<<mini+1<<" "<<maxi+1<<endl;
    // }



    return 0;

}