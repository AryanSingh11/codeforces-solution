#include <algorithm>
#include <iostream>
using namespace std;


int main(){

    long long n, d;
    cin >> n;
    long long f[n];
    long long a = 1, b = 1;

    for(int i = 0; i < n; i++)
        cin >> f[i];

    sort(f, f + n);
    d = f[n - 1] - f[0];

    if(f[0] == f[n - 1])
        cout << d << " " << (n - 1) * n / 2 << endl;
    else
    {
        for(int j = 1; j < n - 1; j++)
        {
        if(f[j] == f[n - 1])
            a++;
        else if(f[j] == f[0])
            b++;
        }
        cout << d << " " << a * b << endl;
    }

    return 0;



    // #ifndef ONLINE_JUDGE
 
    // // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    
    

    
    // long long n;
    // cin>>n;
    // vector<long long> v;
    // for(int i=0; i<n; i++){
    //     long long temp;
    //     cin>>temp;
    //     v.push_back(temp);
    // }
    // sort(v.begin(), v.end());
    

    // int size = v.size();
    // long long max = v[size-1];
    // long long min = v[0];
    // // cout<<"maximum is :"<<max<<endl;
    // // cout<<"min is :"<<min<<endl;
    // //gola
    // int countmin = count(v.begin(), v.end(), min);
    // int countmax = count(v.begin(), v.end(), max);
    // long long a = (max-min);
    // long long combos = countmin*countmax;

    // //there could be a case where all elements
    // //are same. In such cases the pairs would be
    // //sum of  n-1, n-2, n-3
    // if(v[0]==v[size-1])
    // cout<<a<<" "<<(n*(n-1))/2;
    // else
    // cout<<a<<" "<<combos<<"\n";

    // return 0;

}