#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    

    while(t--){
    int l;
    string s;
    cin>>l>>s;
    int sum=0;
    for (int i = 1; i <= l-1; i++)
    {
        string s1 = s.substr(0, i);
        string s2 = s.substr(i, l-i);
        set<char> set1(s1.begin(), s1.end());
        set<char> set2(s2.begin(), s2.end());
        int sizef = set1.size()+set2.size();
        if(sizef>sum)
        sum = sizef;
    }

        cout<<sum<<"\n";
    }
   
    
    
    
    
    return 0;
}