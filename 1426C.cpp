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
        int n, ans=__LONG_LONG_MAX__;
        cin >> n;
        for(int i=1; i*i<=n; i++){
            int copy=(n-i)/i;
            if((n-i)%i!=0){
                copy++;
            }
            int moves=copy+i-1;
            ans=min(ans, moves);
        }
        cout << ans << endl;
    }
    return 0;
}