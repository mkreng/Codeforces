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
        int n, m;
        cin >> n >> m;
        vector<vint> a(n, vint (m));
        vector<pair<int, int>> sum(n, {0,0});
        for(int i=0; i<n; i++){
            sum[i].second=i;
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                sum[i].first+=a[i][j];
            }
        }
        sort(sum.begin(), sum.end(), greater<>());
        int ans=0;
        for(int i=0; i<n; i++){
            ans+=(n-i-1)*sum[i].first*m;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans+=a[sum[i].second][j]*(m-j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}