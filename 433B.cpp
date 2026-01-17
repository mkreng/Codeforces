#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    vector<ll> u=v;
    sort(u.begin(), u.end());
    vector<ll> prefixsum_v(n+1, 0), prefixsum_u(n+1, 0);
    for(ll i=1; i<n+1; i++){
        prefixsum_v[i]=prefixsum_v[i-1]+v[i-1];
        prefixsum_u[i]=prefixsum_u[i-1]+u[i-1];
    }
    ll m;
    cin >> m;
    while(m--){
        ll type, l, r;
        cin >> type >> l >> r;
        if(type==1){
            cout << prefixsum_v[r]-prefixsum_v[l-1] << endl;
        }
        else{
            cout << prefixsum_u[r]-prefixsum_u[l-1] << endl;
        }
    }
    return 0;
}