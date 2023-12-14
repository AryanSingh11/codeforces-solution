#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long int n = 0;
    cin>>n;
    
    long long int sum = 0;
    for(long long int i = 0; i < n; i++){
        long long int temp = 0;
        cin>>temp;
        sum+=temp;
    }

    long long int sumrequired = (n*(n+1))/2;
    
    long long int ans = (sumrequired-sum);

    cout<<ans<<endl;

  return 0;
}