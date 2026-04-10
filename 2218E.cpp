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
        int ans=INT64_MIN;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                ans=max(ans, a[i]^a[j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}