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
        vint q(n), r(n);
        for(int i=0; i<n; i++){
            cin >> q[i];
        }
        for(int i=0; i<n; i++){
            cin >> r[i];
        }
        sort(q.begin(), q.end());
        sort(r.begin(), r.end(), greater<>());
        int ans=0, j=0, l=0;
        while(j<n && l<n){
            while(l<n && (r[l]+1)*q[j]+r[l]>k){
                l++;
            }
            if(l==n){
                break;
            }
            ans++;
            j++;
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}