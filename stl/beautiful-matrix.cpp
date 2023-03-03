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

    int countrow=0;
    int countcol=0;
    int row=0, col=0;
    for (int i = 0; i < 5; i++)
    {
        countrow++;
        countcol=0;
        for (int j = 0; j < 5; j++)
        {
            countcol++;
            int temp;
            cin>>temp;
            if(temp==1){
                row=countrow;
                col=countcol;
            }
            
        }
        
    }

    int ans = abs(row-3)+abs(col-3);
    cout<<ans<<endl;
    

    return 0;

}