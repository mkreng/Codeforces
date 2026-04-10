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
        int kn=n/k;
        if(n%k){
            kn++;
        }
        kn*=k;
        int ans=kn/n;
        if(kn%n){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}