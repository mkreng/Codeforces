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
        int ans=INT64_MAX;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                if(n/i<=k){
                    ans=min(ans, i);
                }
                if(i<=k){
                    ans=min(ans, n/i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}