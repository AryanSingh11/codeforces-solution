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
    for(int &x : v){
     cin>>x;
     //cout<<x<<endl;;
    }
        
    sort(v.begin(), v.end());
    int ss = v.size();
    
    int half = ss/2;
    //cout<<"half"<<half<<endl;
    int xsum=0, ysum=0;
    for (int i = 0; i < half; i++)
    {
        ysum+=v[i];
    }
    for (int i = half; i < ss; i++)
    {
        xsum+=v[i];
    }
    // cout<<"ysum"<<ysum<<endl;
    // cout<<"xsum"<<xsum<<endl;
    int ans = (xsum*xsum)+(ysum*ysum);
    cout<<ans<<endl;

    return 0;

}