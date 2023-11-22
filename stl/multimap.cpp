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

    std::multimap<char, int> mlt;
    mlt.insert(pair<char, int> ('a', 1));
    mlt.insert(make_pair('a', 2));
    mlt.insert(make_pair('a', 45));
    mlt.insert(make_pair('a', 90));
    mlt.insert(make_pair('b', 900));

    for(auto& x: mlt){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    auto range  = mlt.equal_range('a');
    for(auto& x = range.first ; x!=range.second; x++){
        cout<<x->first<<" "<<x->second<<endl;
    }

    return 0;

}