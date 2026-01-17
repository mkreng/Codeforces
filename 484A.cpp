#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
        int l, r;
        cin >> l >> r;
        vint binary;
        int ans=l;
        for(int i=0; i<61; i++){
            binary.push_back(l&1);
            l>>=1;
        }
        for(int i=0; i<binary.size(); i++){
            if(binary[i]==0){
                if(ans+(1LL<<i)<=r){
                    ans+=(1LL<<i);
                }
                else{
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}