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
        int ans=__LONG_LONG_MAX__;
        int consecutive=1;
        for(int i=0; i<n; i+=consecutive){
            int j=i+1;
            consecutive=1;
            while(j!=n && a[i]==a[j]){
                consecutive++;
                j++;
            }
            int cost=(n-consecutive)*a[i];
            ans=min(ans, cost);
        }
        cout << ans << endl;
    }
    return 0;
}