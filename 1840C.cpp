#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        ll len=0, ans=0;
        for(ll i=0; i<n; i++){
            if(a[i]<=q){
                len++;
            }
            else{
                if(len>=k){
                    ll temp=len-k+1;
                    ans+=temp*(temp+1)/2;
                }
                len=0;
            }
        }
        if(len>=k){
            ll temp=len-k+1;
            ans+=temp*(temp+1)/2;
        }
        cout << ans << endl;
    }
    return 0;
}