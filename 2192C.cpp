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
        int n, h, k;
        cin >> n >> h >> k;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vint pfs(n, a[0]), pfmn(n, a[0]), smx(n, a[n-1]);
        for(int i=1; i<n; i++){
            pfs[i]=pfs[i-1]+a[i];
            pfmn[i]=min(pfmn[i-1], a[i]);
            smx[n-1-i]=max(smx[n-i], a[n-1-i]);
        }
        int ans=INT64_MAX;
        for(int i=0; i<n; i++){
            int temp=pfs[i];
            if(i!=n-1){
                temp+=max(0LL, smx[i+1]-pfmn[i]);
            }
            int m=i+1;
            if(temp<h){
                int add=(h-temp)/pfs[n-1];
                if((h-temp)%pfs[n-1]!=0){
                    add++;
                }
                m+=add*n;
            }
            ans=min(ans, m);
        }
        cout << ans+((ans-1)/n)*k << endl;
    }
    return 0;
}