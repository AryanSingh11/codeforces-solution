//https://codeforces.com/problemset/problem/227/B
//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
#include <string>
using namespace std;

bool isInteger(float x){
    int convInt = x;
    float temp = x-convInt;
    if (temp>0)
    return false;
    else
    return true;
}


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int i, a, j, b;
    cin>>i;
    vector<int> v1;
    for (int h = 0; h < i; i++)
    {
        
        cin>>a;
        v1.push_back(a);
    }
    cin>>j;
    vector<int> v2;
    for (int h = 0; h < j; j++)
    {
        
        cin>>b;
        v2.push_back(b);
    }


    float maxratio = 0.0;
    int count = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            float ratio = v2[j]/v1[i];
            bool IntorNot = isInteger(ratio);
            if(IntorNot && (ratio >= maxratio)){
                maxratio = ratio;
                count++;
            }
        }
        
    }

    cout<<count<<"\n";
    

    

    return 0;

}