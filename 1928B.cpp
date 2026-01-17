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
        a.resize(unique(a.begin(), a.end())-a.begin());
        int l=0, ans=LONG_LONG_MIN;
        for(int i=0; i<a.size(); i++){
            while(a[i]-a[l]>n-1){
                l++;
            }
            ans=max(ans, i-l+1);
        }
        cout << ans << endl;
    }
    return 0;
}