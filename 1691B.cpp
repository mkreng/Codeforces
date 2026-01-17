#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
void solve(){
    ll n;
    cin >> n;
    vll s(n);
    for(ll i=0; i<n; i++){
        cin >> s[i];
    }
    unordered_map<ll, vll> freq;
    for(ll i=0; i<n; i++){
        freq[s[i]].push_back(i);
    }
    vll ans(n);
    for(auto &p:freq){
        vll temp=p.second;
        if(temp.size()==1){
            cout << "-1\n";
            return;
        }
        else{
            for(ll i=0; i<temp.size(); i++){
                ans[temp[i]]=temp[(i+1)%temp.size()];
            }
        }
    }
    for(ll i=0; i<n; i++){
        cout << ans[i]+1 << " ";
    }
    cout << endl;
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