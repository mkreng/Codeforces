#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, k;
    cin >> n >> k;
    if(k<=(n+1)/2){
        cout << 2*k-1 << endl;
    }
    else{
        k-=(n+1)/2;
        cout << 2*k << endl;
    }
    return 0;
}