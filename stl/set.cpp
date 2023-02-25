#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(90);
    s.insert(15);
    s.insert(67);
    s.insert(12);
    s.insert(6);

    for (auto i=s.begin(); i!= s.end(); i++)
    {
        int ans= *i;
        cout<<ans<<endl;
    }
    

    return 0;
}