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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans=0;
        for(int i=0; i<n; i++){
            if(a[i]==ans){
                ans++;
            }
        }
        cout << min(ans, k-1) << endl;
    }
    return 0;
}