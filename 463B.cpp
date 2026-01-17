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
    vint h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    int ans=h[0];
    for(int i=1; i<n; i++){
        ans=max(ans, h[i]);
    }
    cout << ans << endl;
    return 0;
}