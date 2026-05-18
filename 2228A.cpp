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
        vint w(n);
        int z=0, o=0, t=0;
        for(auto &i:w){
            cin >> i;
            if(i==0){
                z++;
            }
            else if(i==1){
                o++;
            }
            else{
                t++;
            }
        }
        int ans=z+min(o, t);
        o-=ans-z;
        t-=ans-z;
        ans+=o/3;
        ans+=t/3;
        cout << ans << endl;
    }
    return 0;
}