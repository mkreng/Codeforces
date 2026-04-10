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
        int a, b;
        cin >> a >> b;
        cout << max(min(a, b)*2, max(a, b))*max(min(a, b)*2, max(a, b)) << endl;
    }
    return 0;
}