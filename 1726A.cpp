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
        int mx=*max_element(a.begin(), a.end()), mn=*min_element(a.begin(), a.end()), ans=LONG_LONG_MIN;
        ans=max(max(ans, a[n-1]-mn), max(ans, mx-a[0]));
        for(int i=0; i<n-1; i++){
            ans=max(ans, a[i]-a[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}