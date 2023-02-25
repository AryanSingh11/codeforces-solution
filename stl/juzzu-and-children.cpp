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

    int n,m;
    cin>>n>>m;
    vector<int> v;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
        q.push(temp);
    }
     while(!(q.empty())){
        int front = q.front();
        int frontgiventoffee = front-m;
        if(frontgiventoffee<=0){
            
        }
     }


    return 0;

}