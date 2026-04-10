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
        vint n(3);
        cin >> n[0] >> n[1] >> n[2];
        sort(n.begin(), n.end());
        cout << (n[0]^n[1]^n[2])-n[1] << endl;
    }
    return 0;
}