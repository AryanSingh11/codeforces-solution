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
    cout<<fixed<<setprecision(10);
    for(int i =0; i< t; i++){
        int n;
        cin>>n;
        vector<int> v;
        for(int j=0; j<n; j++){
            int tep;
            cin>>tep;
            v.push_back(tep);
        }
        sort(v.begin(), v.end());
        int ss = v.size();
        double big = 1.0*v[ss-1];
        double restsum;
        for(int k =0; k< ss-1; k++){
            restsum+= (1.0)*v[k];
        }
        double avg1 = restsum/(ss-1);
        double totalavg = avg1 + big;
        cout<< 1.0 * totalavg<<endl;



    }

    return 0;

}