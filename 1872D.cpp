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
        int n, x, y;
        cin >> n >> x >> y;
        int dxy=n/lcm(x, y), dx=n/x-dxy, dy=n/y-dxy;
        int sumx=(dx*(2*n+1-dx))/2, sumy=(dy*(dy+1))/2;
        cout << sumx-sumy << endl;
    }
    return 0;
}