#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    cin >> n >> h;
    int ans=n;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>h){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}