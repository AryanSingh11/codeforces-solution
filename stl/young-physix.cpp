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
    int x=0,y=0,z=0;
    for (int i = 0; i < n; i++)
    {
        int tempx, tempy, tempz;
        cin>>tempx>> tempy>> tempz;
        
        x+=tempx;
        y+=tempy;
        z+=tempz;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    

    return 0;

}