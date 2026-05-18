#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    map<int, int> freq;
    for(int i=0; i<n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    vint l, r;
    l.push_back(0);
    for(auto it:freq){
        l.push_back(l[l.size()-1]+it.second);
    }
    r.push_back(n-freq.begin()->second);
    auto it=++freq.begin();
    for(it; it!=freq.end(); it++){
        r.push_back(r[r.size()-1]-it->second);
    }
    r.push_back(0);
    int ans=0, idx=0;
    for(auto i=freq.begin(); i!=freq.end(); i++){
        ans+=i->second*l[idx]*r[idx];
        idx++;
    }
    cout << ans << endl;
    return 0;
}