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
        vint g(2*n);
        for(int i=0; i<n; i++){
            cin >> g[i];
        }
        for(int i=0; i<n; i++){
            cin >> g[i+n];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(g[i]>g[i+n]){
                ans+=g[i];
                g[i]=LONG_LONG_MIN;
            }
            else{
                ans+=g[i+n];
                g[i+n]=LONG_LONG_MIN;                
            }
        }
        sort(g.begin(), g.end(), greater<>());
        for(int i=0; i<k-1; i++){
            ans+=g[i];
        }
        cout << ans+1 << endl;
    }
    return 0;
}