#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    int arr[5]= {34,69,10,31,23};
    sort(arr, arr+size(arr));
    for (int i = 0; i < size(arr); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;

//sort(arr, arr+size(arr))
}