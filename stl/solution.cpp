#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
     #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        v[i]= temp;
    }
    sort(v.begin(), v.end());

    // for(int x:v){
    //     cout<<x<<endl;
    // }

    int ss = n-1;
    int max = v[ss];
    int min = v[0];
    cout<<abs(max-min)<<endl;

    return 0;
}