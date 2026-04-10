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
        int c, r, s;
        cin >> c >> r >> s;
        int total=(c+r)/s;
        if((c+r)%s!=0){
            total++;
        }
        int f=r/s;
        if(r%s!=0){
            f++;
        }
        int mx=total-f;
        int mn=0;
        if(r<total){
            mn=total-r;
        }
        cout << mx << " " << mn << endl;
    }
    return 0;
}