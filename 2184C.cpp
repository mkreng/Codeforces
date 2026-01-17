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
        int ans=-1;
        for(int i=0;; i++){
            int tempa=k*(1LL<<i), tempb=(1LL<<i)-1;
            if(n>=tempa-tempb && n<=tempa+tempb){
                ans=i;
                break;
            }
            if(n<tempa-tempb){
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}