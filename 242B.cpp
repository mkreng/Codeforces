#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    ll l[n], r[n], diff[n];
    ll max_diff=0, min_l, max_r=0;
    for(ll i=0; i<n; i++){
        cin >> l[i] >> r[i];
        diff[i]=r[i]-l[i];
        if(diff[i]>=max_diff){
            max_diff=diff[i];
        }
        if(i==0){
            min_l=l[i];
        }
        if(l[i]<=min_l){
            min_l=l[i];
        }
        if(r[i]>=max_r){
            max_r=r[i];
        }
    }
    vector<ll> index;
    for(int i=0; i<n; i++){
        diff[i]=r[i]-l[i];
        if(diff[i]==max_diff){
            index.push_back(i);
        }
    }
    int ans=-1;
    for(int i=0; i<index.size(); i++){
        if(l[index[i]]<=min_l && r[index[i]]>=max_r){
            ans=index[i];
        }
    }
    if(ans==-1){
        cout << ans << endl;
    }
    else{
        cout << ans+1 << endl;
    }
    return 0;
}