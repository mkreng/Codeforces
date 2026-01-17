#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> sugar(n);
    for(int i=0; i<n; i++){
        cin >> sugar[i];
    }
    sort(sugar.begin(), sugar.end(), greater<ll>());
    vector<ll> prefix_sum(n);
    prefix_sum[0]=sugar[0];
    for(int i=1; i<n; i++){
        prefix_sum[i]=prefix_sum[i-1]+sugar[i];
    }
    while(q--){
        ll quantity;
        cin >> quantity;
        int l=lower_bound(prefix_sum.begin(), prefix_sum.end(), quantity)-prefix_sum.begin();
        if(l==n){
            cout << "-1" << endl;
        }
        else{
            cout << l+1 << endl;
        }
    }
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