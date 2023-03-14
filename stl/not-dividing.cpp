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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        int s=0;
        int e=s+1;
        int ss = v.size();
        int ops=2*n;
        for (int i = 0; i < ss-1; i++)
        {
            if((v[i+1]%v[i])==0 && (ops>0)){
                while((v[i+1]%v[i])==0){
                    v[i]++;
                    ops--;
                }
            }
        }
        

        for( int x: v){
            cout<<x<<" ";
        }
        cout<<endl;


        
    }
    


    return 0;

}