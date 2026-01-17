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
        cin >> x >> n;
        int ans=1;
        for(int i=1; i*i<=x; i++){
            if(x%i==0){
                if(i*n<=x){
                    ans=max(ans, i);
                }
                if(i>=n){
                    ans=max(ans, x/i);
                }
            }            
        }
        cout << ans << endl;
    }
    return 0;
}