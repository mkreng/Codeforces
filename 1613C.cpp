#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n, ll h, vector<ll> &a, ll k){
    ll attacks=k;
    for(ll i=0; i<n-1; i++){
        ll x=k;
        if(a[i+1]<a[i]+k){
            x=a[i+1]-a[i];
        }
        attacks+=x;
    }
    if(attacks>=h){
        return 1;
    }
    else{
        return 0;
    }
}
void solve(){
    ll n, h;
    cin >> n >> h;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    ll low=1;
    ll high=h;
    ll ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(n, h, a, mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}