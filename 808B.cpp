#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vint a(n);
    for(auto &i:a){
        cin >> i;
    }
    int s=0;
    for(int i=0; i<n; i++){
        s+=a[i]*min({i+1, n-i, k, n-k+1});
    }
    long double ans=s/(long double)(n-k+1);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}