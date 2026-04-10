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
        int a, b, n;
        cin >> a >> b >> n;
        int ans=0;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
            }
            else{
                a+=b;
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}