#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k=0;
        cin >> n;
        vll a(n), b(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        ll small=k, big=k;
        for(ll i=0; i<n-1; i++){
            ll small_temp=small, big_temp=big;
            small=min(min(small_temp-a[i], b[i]-small_temp), min(big_temp-a[i], b[i]-big_temp));
            big=max(max(small_temp-a[i], b[i]-small_temp), max(big_temp-a[i], b[i]-big_temp));
        }
        ll ans=max(max(small-a[n-1], b[n-1]-small), max(big-a[n-1], b[n-1]-big));
        cout << ans << endl;
    }
    return 0;
}