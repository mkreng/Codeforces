#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vint a(n);
    for(auto &i:a){
        cin >> i;
    }
    while(k--){
        int q;
        cin >> q;
        cout << lower_bound(a.begin(), a.end(), q)-a.begin()+1 << endl;
    }
    return 0;
}