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
    for(auto &i:a){
        cin >> i;
    }
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    while(k--){
        int l, r;
        cin >> l >> r;
        cout << upper_bound(a.begin(), a.end(), r)-lower_bound(a.begin(), a.end(), l) << " ";
    }
    return 0;
}