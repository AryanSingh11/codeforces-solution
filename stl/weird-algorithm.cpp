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
    cout<<n<<" ";

    while(n>1){
        if(n&1){
            n = (n*3+1);
            cout<<n<<" ";
        }else{
            n >>= 1; //right shift by 1 divides by 2
            cout<<n<<" ";
        }
    }

    // cout<<1<<" ";

  return 0;
}