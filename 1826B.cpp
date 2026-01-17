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
        int ans=0;
        for(int i=0; i<n/2; i++){
            ans=gcd(ans, abs(a[i]-a[n-i-1]));
        }
        cout << ans << endl;
    }
    return 0;
}