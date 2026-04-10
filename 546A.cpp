#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, w;
    cin >> k >> n >> w;
    int m=((w)*(w+1))*k/2;
    cout << max(0LL, m-n) << endl;
    return 0;
}