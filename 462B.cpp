#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> freq(26, 0);
    for(ll i=0; i<s.size(); i++){
        freq[s[i]-'A']++;
    }
    sort(freq.begin(), freq.end(), greater<>());
    ll remaining=k, j=0;
    ll ans=0;
    for(j=0; j<26; j++){
        if(remaining<=0){
            break;
        }
        ans+=min(remaining, freq[j])*min(remaining, freq[j]);
        remaining-=min(remaining, freq[j]);
    }
    cout << ans << endl;
    return 0;
}