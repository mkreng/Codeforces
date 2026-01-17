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
        cin >> n >> x;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int y=0, z=n-1, s=0,ans=0;
        vint res;
        while(y<=z){
            int old_l=s/x;
            if((s+a[z])/x>old_l){
                s+=a[z];
                res.push_back(a[z]);
                ans+=a[z];
                z--;
            }
            else{
                s+=a[y];
                res.push_back(a[y]);
                y++;
            }
        }
        cout << ans << endl;
        for(auto i:res){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}