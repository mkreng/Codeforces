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
        vector<vint> a(2, vint(n));
        for(int i=0; i<2; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int d=INT64_MIN, ans=0;
        for(int i=0; i<n; i++){
            ans+=max(a[0][i], a[1][i]);
            d=max(d, min(a[0][i], a[1][i]));
        }
        cout << ans+d << endl;
    }
    return 0;
}