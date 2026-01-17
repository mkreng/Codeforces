#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    return a.second<b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> a(n);
        for(ll i=0; i<n; i++){
            ll temp;
            cin >> temp;
            ll temp2=temp%k;
            if(temp2==0){
                temp2=k;
            }
            a[i].first=temp2;
            a[i].second=i+1;
        }
        sort(a.begin(), a.end(), cmp);
        for(ll i=0; i<n; i++){
            cout << a[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}