#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll ans=0, min_window=a[0], max_window=a[0];
        for(ll i=1; i<n; i++){
            min_window=min(min_window, a[i]);
            max_window=max(max_window, a[i]);
            if(max_window-min_window>2*x){
                ans++;
                min_window=max_window=a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}