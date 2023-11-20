#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

void insertTop(stack<int>&s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    if(s.top()<=x){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insertTop(s, x);
    s.push(temp);

}

void sortstack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    sortstack(s);
    insertTop(s, temp);
}

int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    stack<int> s;
    s.push(21);
    s.push(99);
    s.push(88);
    s.push(883);
    s.push(31);
    s.push(64);

    sortstack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;

}