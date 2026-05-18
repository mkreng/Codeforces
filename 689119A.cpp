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
    int n2, n3, n4, n5;
    cin >> n2 >> n3 >> n4 >> n5;
    int ans=2*n2+3*n3+4*n4+5*n5+min(n2, n5);
    cout << ans << endl;
    return 0;
}