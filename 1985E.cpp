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
        int x, y, z, k;
        cin >> x >> y >> z >> k;
        int ans=0;
        for(int i=1; i<=x; i++){
            if(k%i==0){
                for(int j=1; j<=y; j++){
                    if(k%j==0 && k%(i*j)==0 && k/(i*j)<=z){
                        ans=max(ans, (x-i+1)*(y-j+1)*(z-k/(i*j)+1));
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}