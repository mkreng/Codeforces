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
        vint p(n);
        for(auto &i:p){
            cin >> i;
        }
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(p[i]%(abs(p[i]-p[i+1]))==0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}