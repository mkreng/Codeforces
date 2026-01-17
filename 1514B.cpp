#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll pow_mod(ll n, ll k, ll m){
    if(k==1){
        return n;
    }
    ll x=pow_mod(n, k/2, m)%m;
    ll ans;
    if(k%2==1){
        ans=((x%m*x%m)%m*n%m)%m;
    }
    else{
        ans=(x%m*x%m)%m;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << pow_mod(n, k, 1000000007) << endl;
    }
    return 0;
}