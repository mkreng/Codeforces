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
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        m-=min(m/k, ak)*k;
        int ans=0;
        if(m>a1){
            m-=a1;
            int temp1=m%k, temp2=k-temp1;
            ans+=temp1;
            ans+=m/k;
            if(a1>=temp2){
                int ans2=(m+temp2)/k;
                ans=min(ans, ans2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}