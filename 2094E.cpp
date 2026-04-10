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
        vint a(n), b(30, 0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            for(int j=0; j<30; j++){
                if(a[i]&(1LL<<j)){
                    b[j]++;
                }
            }
        }
        int mxans=INT64_MIN;
        for(int i=0; i<n; i++){
            int ans=0;
            for(int j=0; j<30; j++){
                if(a[i]&(1LL<<j)){
                    ans+=(n-b[j])*(1LL<<j);
                }
                else{
                    ans+=b[j]*(1LL<<j);
                }
            }
            mxans=max(mxans, ans);
        }
        cout << mxans << endl;
    }
    return 0;
}