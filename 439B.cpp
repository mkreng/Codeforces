#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vint c(n);
    for(int i=0; i<n; i++){
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=c[i]*x;
        if(x!=1){
            x--;
        }
    }
    cout << ans << endl;
    return 0;
}