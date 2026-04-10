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
        int n, x, y;
        cin >> n >> x >> y;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum=accumulate(a.begin(), a.end(), 0LL);
        int reml=sum-x;
        int remr=sum-y;
        int ans=0;
        for(int i=0; i<n; i++){
            int r=upper_bound(a.begin()+i+1, a.end(), reml-a[i])-a.begin();
            int l=lower_bound(a.begin()+i+1, a.end(), remr-a[i])-a.begin();
            ans+=r-l;
        }
        cout << ans << endl;
    }
    return 0;
}