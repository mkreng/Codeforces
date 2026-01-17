#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b){
    if(a.second>b.second){
        return false;
    }
    if(a.second==b.second){
        if(a.first>b.first){
            return true;
        }
        return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, p;
        cin >> n >> p;
        vector<pair<ll, ll>> residents(n);
        for(int i=0; i<n; i++){
            cin >> residents[i].first;
        }
        for(int i=0; i<n; i++){
            cin >> residents[i].second;
        }
        sort(residents.begin(), residents.end(), cmp);
        ll ans=p, remaining_residents=n-1, j=0;
        while(p>residents[j].second && remaining_residents>0){
            if(residents[j].first==0){
                j++;
            }
            else{
                remaining_residents--;
                ans+=residents[j].second;
                residents[j].first--;
            }
        }
        if(remaining_residents>0){
            ans+=p*remaining_residents;
        }
        cout << ans << endl;
    }
    return 0;
}