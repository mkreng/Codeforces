#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans=0;
    while(n--){
        int p, q;
        cin >> p >> q;
        if(p+1<q){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}