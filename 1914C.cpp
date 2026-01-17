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
        int n, k;
        cin >> n >> k;
        vint a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int suma=0, maxb=LONG_LONG_MIN, ans=LONG_LONG_MIN;
        for(int i=1; i<=min(n, k); i++){
            suma+=a[i-1];
            maxb=max(maxb, b[i-1]);
            int p=suma+(k-i)*(maxb);
            ans=max(ans, p);
        }
        cout << ans << endl;
    }
    return 0;
}