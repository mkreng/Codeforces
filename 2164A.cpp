#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll x;
        cin >> x;
        if(x>=*min_element(a.begin(), a.end()) && x<=*max_element(a.begin(), a.end())){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}