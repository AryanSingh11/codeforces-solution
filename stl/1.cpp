#include<bits/stdc++.h>
using namespace std;

long long  factorial( long long n){
    if(n==1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial((long long)n)<<"\n";
}

