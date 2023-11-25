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

    int N = 1e5+5;
    int n;
    cin>>n;
    int a[N];
    int b[N];

    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b, b+n);
    map<int, int> m; //int->index
    for(int i=0; i<n; i++){
        m[b[i]]=i;
    }

    //b mein jahan elem hai uska index a mein ddal do
    for(int i=0; i<n; i++){
        a[i]= m[a[i]];
    }

    //find smallest where a[i]!=i
    int L = -1;
    for(int i=0; i<n; i++){
        if(a[i]!=i){
            L=i;
            break;
        }
    }
    int R=-1;
    for(int i = (n-1); i>=0 ; i--){
        if(a[i]!=i){
            R=i;
            break;
        }
    }

    if(L==-1 && R==-1){
        cout<<"yes"<<endl;
        cout << 1 << " " << 1 << endl;
    }else{
        reverse(a+L, a+R+1);
        if(is_sorted(a, a+n)){
            //true sort hogya
            cout<<"yes"<<endl;
            cout<<L+1<<" "<<R+1<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    return 0;

}