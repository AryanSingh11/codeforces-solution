#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int> v(n, 0);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        sum+=v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;
    int currsum = 0;
    for(int i = 0; i < n; i++){
        currsum += v[i];
        if(currsum > sum/2 ){
            ans = i+1;
            break;
        }
    }

    cout<<ans<<endl;

  return 0;
}