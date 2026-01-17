#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vint time(n);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        time[i]=a*b;
    }
    vint prefix(n+1, 0);
    for(int i=1; i<=n; i++){
        prefix[i]=prefix[i-1]+time[i-1];
    }
    while(m--){
        int v;
        cin >> v;
        int ans=lower_bound(prefix.begin(), prefix.end(), v)-prefix.begin();
        cout << ans << endl;
    }
    return 0;
}