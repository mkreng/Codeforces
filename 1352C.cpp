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
        int ans=(k/(n-1))*n-1;
        if(k%(n-1)!=0){
            ans+=k%(n-1)+1;
        }
        cout << ans << endl;
    }
    return 0;
}