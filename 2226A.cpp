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
        int n, m=676767677;
        cin >> n;
        vint a(n);
        int ans=0;
        for(auto &i:a){
            cin >> i;
            if(i>1){
                ans+=i;
                ans%=m;
            }
        }
        if(a[n-1]==1){
            ans++;
            ans%=m;
        }
        cout << ans << endl;
    }
    return 0;
}