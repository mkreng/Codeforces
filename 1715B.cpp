#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    if(s<b*k || s>b*k+(k-1)*n){
        cout << "-1\n";
        return;
    }
    vector<ll> ans(n, 0);
    ans[0]=b*k;
    ll remaining=s-b*k;
    for(ll i=0; i<n && remaining>0; i++){
        ans[i]+=min(remaining, k-1);
        remaining-=min(remaining, k-1);
    }
    for(ll i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}