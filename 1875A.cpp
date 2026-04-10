#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        vint x(n);
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        int ans=b;
        for(int i=0; i<n; i++){
            ans+=min(a-1, x[i]);
        }
        cout << ans << endl;
    }
    return 0;
}