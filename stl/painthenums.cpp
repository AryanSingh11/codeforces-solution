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
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    //int ss = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    // for( int x : arr){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    set<int> v;
    for(int i =0; i<n; i++){
        if(arr[i]==-1){
            continue;
        }else{
            v.insert(arr[i]);
            int temp = arr[i];
            //cout<<temp<<endl;
            for(int j=i; j<n; j++){
                if(arr[j]%temp==0){
                    arr[j]=-1;
                }
            }
        }
        
    }
    // for( int x : v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    if(v.size()){
        cout<<v.size()<<endl;
    }else{
        cout<<1<<endl;
    }


    return 0;

}