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
        int u, v;
        cin >> u >> v;
        cout << (-1)*u*u << " " << v*v << endl;
    }
    return 0;
}