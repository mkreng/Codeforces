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
        int n;
        cin >> n;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans=0;
        vint b;
        for(int i=0; i<n; i++){
            if(a[i]<i+1){
                ans+=lower_bound(b.begin(), b.end(), a[i])-b.begin();
                b.push_back(i+1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}