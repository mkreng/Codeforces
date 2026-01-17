#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n, ll k, vector<ll> &a, vector<ll> &b, ll mid){
    for(ll i=0; i<n; i++){
        ll required=mid*a[i];
        required-=b[i];
        if(required>0){
            if(required<=k){
                k-=required;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }
    ll low=0;
    ll high=(b[0]+k)/a[0];
    ll ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(n, k, a, b, mid)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}