#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    ll sum=a[0];
    for(ll i=1; i<n; i++){
        sum+=a[i];
    }
    if(sum%n==0){
        cout << n << endl;
    }
    else{
        cout << n-1 << endl;
    }
    return 0;
}