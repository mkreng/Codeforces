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
        int x, y;
        cin >> x >> y;
        int ans=0;
        for(int i=0; i<32; i++){
            if((x&(1LL<<i))==(y&(1LL<<i))){
                ans++;
            }
            else{
                break;
            }
        }
        cout << (1LL<<ans) << endl;
    }
    return 0;
}