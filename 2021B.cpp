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
        int n, x;
        cin >> n >> x;
        vint a(n), c(n+1, 0);
        for(auto &i:a){
            cin >> i;
            if(i<=n){
                c[i]++;
            }
        }
        int ans=0;
        for(int i=0; i<=n; i++){
            if(c[i] && i+x<=n){
                c[i+x]+=c[i]-1;
            }
            if(c[i]<=0){
                ans=i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}