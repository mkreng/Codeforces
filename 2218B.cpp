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
        vint a(7);
        for(int i=0; i<7; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans=a[6];
        for(int i=0; i<6; i++){
            ans-=a[i];
        }
        cout << ans << endl;
    }
    return 0;
}