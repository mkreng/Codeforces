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
        int n, k;
        cin >> n >> k;
        vint a(n);
        int ans=INT64_MIN, l=INT64_MIN, r=INT64_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            ans=max(ans, a[i]);
        }
        int p=0;
        for(int i=0; i<n; i++){
            if((ans-a[i])%(2*k)>=k){
                p=max(p, 2*k-(ans-a[i])%(2*k));
            }
        }
        ans+=p;
        bool o=1;
        for(int i=0; i<n; i++){
            if((ans-a[i])%(2*k)>=k){
                o=0;
                break;
            }
        }
        if(o){
            cout << ans << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}