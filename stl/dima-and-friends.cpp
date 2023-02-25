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
    int totalfrens = n+1;
    int sum=0;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    int evennosbet1and5 = 2;
    int oddnosbet1and5 = 3;
    int ans=0;

    int count=0;
    for(int i =1; i<=5; i++){
        int newsum = sum+i;
        if(newsum%totalfrens!=1){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;

}