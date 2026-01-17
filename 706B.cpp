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
    vint x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin >> q;
    while(q--){
        int m;
        cin >> m;
        int index=upper_bound(x.begin(), x.end(), m)-x.begin();
        cout << index << endl;
    }
    return 0;
}