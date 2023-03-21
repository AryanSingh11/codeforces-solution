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

    int  a,b,n;
    cin>>a>>b>>n;
    bool exist = false;
  
    for(int i =0; i<10; i++){
        int newint = (a*10+i);
        if(newint%b==0){
            exist = true;
            string s(n-1, '0');
            cout<<newint;
            cout<<s<<endl;
            break;
        }
    }
    if(!exist){
        cout<<-1<<endl;
    }


    return 0;

}