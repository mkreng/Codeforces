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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << min(x, y)*min(b, 2*a)+abs(x-y)*a << endl;
    }
    return 0;
}