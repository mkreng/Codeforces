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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int x=0;
        for(int i=1; i<n; i++){
            x-=a[i];
        }
        int ans=x;
        for(int i=1; i<n; i++){
            if(i==1){
                x+=a[i]+a[i-1];
            }
            else{
                x+=a[i]+abs(a[i-1]);
            }
            ans=max(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}