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
        int n, m;
        cin >> n >> m;
        if(m%2){
            int ans=(m/2)*n+(n/2);
            if(n%2){
                ans++;
            }
            cout << ans << endl;
        }
        else{
            cout << (m/2)*n << endl;
        }
    }
    return 0;
}