#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , string > p[5];
    p[0]={56,"aman"};
    p[1]={27,"anuja"};
    p[2]={56,"kumar"};
    p[3]={89,"zoya"};
    p[4]={13,"nidhi"};
    sort(p, p+size(p));
    for (int i = 0; i < size(p); i++)
    {
        pair<int, string> temp = p[i];
        cout<<temp.first<<": "<<temp.second<<endl;
    }
    

    return 0;
}