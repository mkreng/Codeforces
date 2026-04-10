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
        vint a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            int m;
            if(i==0){
                m=gcd(a[i], a[i+1]);
            }
            else if(i==n-1){
                m=gcd(a[i], a[i-1]);
            }
            else{
                m=lcm(gcd(a[i], a[i+1]), gcd(a[i], a[i-1]));
            }
            if(m<a[i]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}