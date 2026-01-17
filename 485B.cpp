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
    vint x(n), y(n);
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int temp=max(x[n-1]-x[0], y[n-1]-y[0]);
    cout << temp*temp << endl;
    return 0;
}