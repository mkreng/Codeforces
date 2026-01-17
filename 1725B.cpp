#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, d;
    cin >> n >> d;
    vector<ll> p(n);
    for(ll i=0; i<n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    ll strong=n-1, weak=0, players_needed=0, ans=0;
    while(weak<=strong){
        players_needed=d/p[strong]+1;
        if(players_needed>strong-weak+1){
            break;
        }
        strong--;
        weak+=players_needed-1;
        ans++;
    }
    cout << ans << endl;
    return 0;
}