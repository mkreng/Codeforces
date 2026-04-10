#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while(q--){
        int c, m, x;
        cin >> c >> m >> x;
        cout << min({c, m, (c+m+x)/3}) << endl;
    }
    return 0;
}