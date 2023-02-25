#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

bool arraysequal( vector<int> sorted, vector<int> segmented){
    if(sorted==segmented){
        return true;
    }

    return false;
}


int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int> v;
    vector<int> recover=v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> sorted = v;
    sort(sorted.begin(), sorted.end());

    int ss = v.size();
    for(int i =0; i< ss; i++){
        for(int j=0+i; j < ss; j++ ){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            for(int x: v){
                cout<<x<<" ";
            }
            cout<<endl;
            if(arraysequal(sorted, v)){
                cout<<"YES"<<endl;
                cout<<v[i]<<" "<<v[j]<<endl;
                return 0;
            }else{
                v=recover;
            }
        }
    }

    cout<<"NO"<<endl;

    return 0;

}