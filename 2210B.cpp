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
        vint p(n);
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        vint pf(n+2, 0);
        for(int i=0; i<n; i++){
            if(p[i]>i+1){
                pf[p[i]+1]++;
            }
        }
        int ans=0, x=0;
        for(int i=1; i<n+2; i++){
            x+=pf[i];
            ans=max(ans, i-x-1);
        }
        cout << ans << endl;
    }
    return 0;
}