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
        int n;
        cin >> n;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vint b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        vint p(n+1, 0);
        for(int i=1; i<=n; i++){
            p[i]=p[i-1]+b[i-1];
        }
        int ans=INT64_MIN;
        for(int i=0; i<n; i++){
            int s=a[i]*(upper_bound(p.begin(), p.end(), n-i)-p.begin()-1);
            ans=max(ans, s);
        }
        cout << ans << endl;
    }
    return 0;
}