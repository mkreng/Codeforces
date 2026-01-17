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
        int l, a, b;
        cin >> l >> a >> b;
        int g=gcd(b, l);
        cout << a%g+(l/g-1)*g << endl;
    }
    return 0;
}