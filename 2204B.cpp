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
        vint p(n, a[0]);
        for(int i=1; i<n; i++){
            p[i]=max(a[i], p[i-1]);
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(a[i]==p[i]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}