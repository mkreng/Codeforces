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
        int ct, ch, cu;
        cin >> ct >> ch >> cu;
        int ans=3*(ct+ch+cu);
        int tu=min(ct, cu);
        ans-=2*tu;
        ct-=tu;
        cu-=tu;
        int th=min(ct, 2*ch);
        ct-=th;
        ch-=2*th;
        ans-=th;
        if(ct){
            ans-=ct-1;
        }
        cout << ans << endl;
    }
    return 0;
}