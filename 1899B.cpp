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
        vint prefix(n);
        prefix[0]=a[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        int ans=LONG_LONG_MIN;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                int big=prefix[i-1], small=prefix[i-1], sum=prefix[i-1];
                for(int j=2*i-1; j<n; j+=i){
                    sum=prefix[j]-prefix[j-i];
                    big=max(big, sum);
                    small=min(small, sum);
                }
                int diff=big-small;
                ans=max(ans, diff);
            }
        }
        cout << ans << endl;
    }
    return 0;
}