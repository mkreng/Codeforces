#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int ans=LONG_LONG_MIN;
    for(int i=0; i<=n; i++){
        if(m-2*i>=0){
            ans=max(ans, i+min(m-2*i, (n-i)/2));
        }
    }
    cout << ans << endl;
    return 0;
}