#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for(ll i=0; i<n; i++){
        cin >> h[i];
    }
    ll sum=0, index=1, start=0, end=k;
    for(ll i=0; i<k; i++){
        sum+=h[i];
    }
    ll ans=sum;
    while(end!=n){
        sum+=-h[start]+h[end];
        start++;
        end++;
        if(sum<ans){
            ans=sum;
            index=start+1;
        }
    }
    cout << index << endl;
    return 0;
}