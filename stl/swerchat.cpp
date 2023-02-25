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
    
   
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;

    //vector1 input
    for(int i=0; i<n; i++){
        int temp=0;
        cin>>temp;
        v1.push_back(temp);
    }

    //vector2 input
    for(int i=0; i<n; i++){
        int temp=0;
        cin>>temp;
        v2.push_back(temp);
    }
    

    //creating new vector of index of v2
    vector<int> vecindex(n,0);
    for(int i=0; i<n; i++){
        int index1 =i;
        int elematv1 = v1[i];
        //int id = v1[i];
        auto it2 = find(v2.begin(), v2.end(), elematv1);
        int index2 = it2 - v2.begin();
        vecindex[index2]= i;
    }

    // //print v1
    // for(int x: v1){
    //     cout<<x;
    // }
    // cout<<endl;
    // //print v2
    // for(int x: v2){
    //     cout<<x;
    // }
    // cout<<endl;
    // //print veccindex
    // for(int x: vecindex){
    //     cout<<x;
    // }
    // cout<<endl;

    //finding longest repearing subarray of vecindex
    int len=1;
    int max=1;
    for(int i =1; i<n; i++){
        if(vecindex[i-1]<vecindex[i]){
            len++;
        }else{
            if(max<len){
                max= len;
            }
            len=1;
        }
        
    }
    if (max < len){
        max = len;
    }

    //it'd be final answer
    int ans = n-max;
    cout<<ans<<"\n";

    }
    

    return 0;

} 