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
        int n, k;
        cin >> n >> k;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vint z(31, 0);
        for(int i=30; i>=0; i--){
            for(int j=0; j<n; j++){
                if((a[j]&(1LL<<i))==0){
                    z[30-i]++;
                }
            }
        }
        for(int i=0; i<31; i++){
            if(z[i]<=k){
                k-=z[i];
                z[i]=0;
            }
        }
        int ans=0;
        for(int i=0; i<31; i++){
            if(z[i]==0){
                ans+=(1LL<<(30-i));
            }
        }
        cout << ans << endl;
    }
    return 0;
}