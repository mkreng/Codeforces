#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> distinct_right(n-1, 0);
        vector<ll> distinct_left(n-1, 0);
        vector<ll> freq_right(26, 0);
        vector<ll> freq_left(26, 0);
        ll curr_right=0, curr_left=0;
        for(ll i=0; i<n-1; i++){
            if(freq_left[s[i]-'a']==0){
                curr_left++;
            }
            freq_left[s[i]-'a']++;
            distinct_left[i]=curr_left;
            if(freq_right[s[n-i-1]-'a']==0){
                curr_right++;
            }
            freq_right[s[n-i-1]-'a']++;
            distinct_right[i]=curr_right;
        }
        ll ans=0;
        for(ll i=0; i<n-1; i++){
            ans=max(ans, distinct_left[i]+distinct_right[n-i-2]);
        }
        cout << ans << endl;
    }
    return 0;
}