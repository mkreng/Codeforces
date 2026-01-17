#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vint x(m+1);
    for(int i=0; i<=m; i++){
        cin >> x[i];
    }
    int ans=0;
    for(int i=0; i<m; i++){
        if(__builtin_popcount(x[m]^x[i])<=k){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}