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
    
    for(int i =0; i< t; i++){
        int n;
        cin>>n;
        double sqrrt = sqrt(n);
        int final = ceil(sqrrt);
        cout<<final<<endl;

        



    }

    return 0;

}