#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double ans=max(a[0], l-a[n-1]);
    int maxd=LONG_LONG_MIN;
    for(int i=0; i<n-1; i++){
        maxd=max(maxd, a[i+1]-a[i]);
    }
    double temp=(double)maxd/2.0;
    ans=max(ans, temp);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}