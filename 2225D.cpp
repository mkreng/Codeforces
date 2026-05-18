#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m=998244353;
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int lz=1, rz=1, lo=0, ro=0;
        if(x>3){
            lz+=(x-4)/4+1;
        }
        if(n>2){
            rz+=(n-3)/4+1;
        }
        if(x>1){
            lo=(x-2)/4+1;
        }
        if(n){
            ro=(n-1)/4+1;
        }
        cout << (((lz)%m*(((rz)%m-(lz)%m)%m+m))%m+((lo)%m*(((ro)%m-(lo)%m)%m+m))%m)%m << endl;
    }
    return 0;
}