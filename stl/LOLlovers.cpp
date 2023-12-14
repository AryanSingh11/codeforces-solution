#include "bits/stdc++.h"
using namespace std;

typedef long double ld;
typedef long long int ll;
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const ll NINF = -1e18;
#define pb push_back
#define endl "\n"
#define sz(x) (int)(x.size())
#define deb(x) cout << #x << " = " << x << endl
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
//===========================================================================
// Don't die wondering.

// void solve() {

//     int n;
//     cin >> n;
    
//     string s ;
//     cin>>s;
//     int l, on = 0;

//     for(int i=0; i<n; i++){
//         if(s[i] == 'L'){
//             l++;
//         }else{
//             on++;
//         }
//     }

//     int i , leftl, lefton = 0;
//     i=1;
//     if(s[0]=='L'){
//         leftl++;
//         l--;
//     }else{
//         lefton++;
//         on--;
//     }

//     if(i<n && (leftl != l) && (lefton != on)){
//         cout<<1<<endl;
//         return;
//     }

//     bool flag = false;
//     while(i<n-1 && (leftl != l) && (lefton != on)){
//         if(s[i]=='L'){
//             leftl++;
//             l--;
//         }else{
//             lefton++;
//             on--;
//         }

//         i++;
//         flag = true;
//     }

//     if( (leftl != l) && (lefton != on)){
//         i--;
//         cout<<i<<endl;
//     }else{
//         cout<<-1<<endl;
//     }

// }

#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    
    string s ;
    cin>>s;
    
    int rightbread = 0;
    int rightonion = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            rightbread++;
        }else{
            rightonion++;
        }
    }

    // cout<<rightbread<<endl;
    // cout<<rightonion<<endl;

    int leftbread = 0;
    int leftonion = 0;

    //first
    if(s[0]=='L'){
        leftbread++;
        // cout<<leftbread<<endl;
    }else if(s[0]=='O'){
        leftonion++;
    }

    // cout<<leftbread<<endl;
    // cout<<leftonion<<endl;

    // if(leftbread!=rightbread && leftonion!=rightonion){
    //     cout<<1<<endl;
    //     return 0;
    // }

    int i =1;
    while(i<n-1 && leftbread!=rightbread && leftonion!=rightonion){
        if(s[0]=='L'){
            leftbread++;
            rightbread--;
        }else{
            leftonion++;
            rightonion--;
        }

        cout<<"leftbread: "<<leftbread<<" rightbread: "<<rightbread<<endl;
        cout<<"leftonion: "<<leftonion<<" rightonion: "<<rightonion<<endl;

        i++;
    }

    if(leftbread!=rightbread || leftonion!=rightonion){
        cout<<-1<<endl;
        return 0;
    }

    cout<<(--i)<<endl;



    return 0;
}