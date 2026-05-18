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
        for(auto &i:a){
            cin >> i;
        }
        for(int i=n-2; i>=0; i--){
            a[i]=max(a[i], a[i]+a[i+1]);
        }
        int ans=0;
        for(auto i:a){
            if(i>0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}