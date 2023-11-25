#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

bool isValid(int i, int j){
    if(i>=0 && j>=0 && i<3 && j<3){
        return true;
    }
    return false;
}

int getsum(int i, int j, int arr[3][3]){
    cout<<"row: "<<i<<" col: "<<j<<endl;
    int dx[5] = {0, -1, 0, +1, 0};
    int dy[5] = {-1, 0, +1, 0, 0};
    int sum=0;
    for(int i = 0; i <5; i++){
        int row = i+dx[i];
        int col = j+dy[i];
        if(row>=0 && col>=0 && row<3 && col<3){
            sum+=arr[row][col];
            cout<<"adding: "<<arr[row][col]<<" ";
        }
    }
    cout<<endl;
    
    return sum;
}

int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int sum = getsum(i, j, arr);
            //cout<<sum<<" ";
            if(sum%2==0){
                //ON
                ans[i][j] = 1;
            }else{
                ans[i][j] = 0;
            }
        }
        //cout<<endl;
    }

    //print
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    


    return 0;

}