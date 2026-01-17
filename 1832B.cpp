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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans=LONG_LONG_MIN;
        sort(a.begin(), a.end());
        vint prefix(a);
        prefix[0]=a[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        for(int i=0; i<=k; i++){
            if(i!=k){
                ans=max(ans, prefix[n-1-i]-prefix[2*(k-i)-1]);
            }
            else{
                ans=max(ans, prefix[n-1-i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}