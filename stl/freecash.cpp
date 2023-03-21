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
    if(n==0 || n== 1) {
        cout<<n<<endl;
        return 0;
    }

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int h,min;
        cin>>h>>min;
        int curr = (h*60)+min;
        m[curr]++;
    }
    int maxf=0;
    for(auto x :m){
        int freq = x.second;
        maxf = max(maxf, freq);
    }

    cout<<maxf<<endl;

    return 0;

}