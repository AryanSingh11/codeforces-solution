#include<bits/stdc++.h>
using namespace std;

pair<int, int> p1(int divisor, int dividend){
    int quotient = dividend/divisor;
    int remainder = dividend%divisor;
    return {quotient, remainder};
}
int main(){
    int divisor;
    int dividend;
    cin>> dividend>>divisor;

    pair<int, int > p2 = p1(divisor, dividend );
    cout<<"Quotient: "<<p2.first <<" "<< "Remainder: "<<p2.second<<endl;

    return 0;
}