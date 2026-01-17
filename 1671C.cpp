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
        int n, x;
        cin >> n >> x;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vint prefix(n, 0);
        prefix[0]=a[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(prefix[i]>x){
                break;
            }
            int days=(x-prefix[i])/(i+1);
            ans+=days+1;
        }
        cout << ans << endl;
    }
    return 0;
}