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
        int n, x, y;
        cin >> n >> x >> y;
        vint a(n);
        map<pair<int, int>, int> freq;
        int ans=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            ans+=freq[{(x-a[i]%x)%x, a[i]%y}];
            freq[{a[i]%x, a[i]%y}]++;
        }
        cout << ans << endl;
    }
    return 0;
}