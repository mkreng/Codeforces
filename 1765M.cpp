#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll a=1, b=n-1;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            cout << n/i << " " << n-n/i << endl;
            return;
        }
    }
    cout << "1 " << n-1 << endl;
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