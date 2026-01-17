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
        int n, q, sum=0;
        cin >> n >> q;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        vint prefix(n+1, 0);
        for(int i=0; i<n; i++){
            prefix[i+1]=a[i]+prefix[i];
        }
        while(q--){
            int l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;
            int changed=sum-(prefix[r+1]-prefix[l])+(r-l+1)*k;
            if(changed%2==1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}