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
        int n, q;
        cin >> n >> q;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            a[i]=max(a[i], temp);
        }
        vint mx(n+1, 0);
        for(int i=n-1; i>=0; i--){
            mx[i]=max(a[i], mx[i+1]);
        }
        vint prefix(n+1, 0);
        for(int i=1; i<=n; i++){
            prefix[i]=prefix[i-1]+mx[i-1];
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            cout << prefix[r]-prefix[l-1] << " ";
        }
        cout << endl;
    }
    return 0;
}