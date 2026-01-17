#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint p(n);
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(abs(p[i]-i-1)!=0){
                ans=gcd(ans, abs(p[i]-i-1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}