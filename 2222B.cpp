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
        int n, m;
        cin >> n >> m;
        vint a(n), o, e, x(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2){
                e.push_back(a[i]);
            }
            else{
                o.push_back(a[i]);
            }
        }
        int ox=0, ex=0;
        for(auto &i:x){
            cin >> i;
            if(i%2){
                ox++;
            }
            else{
                ex++;
            }
        }
        int ans=0, osize=o.size(), esize=e.size();
        sort(o.begin(), o.end(), greater<>());
        sort(e.begin(), e.end(), greater<>());
        if(ox){
            ans+=o[0];
        }
        if(ex){
            ans+=e[0];
        }
        for(int i=1; i<min(ox, osize); i++){
            if(o[i]>0){
                ans+=o[i];
            }
            else{
                break;
            }
        }
        for(int i=1; i<min(ex, esize); i++){
            if(e[i]>0){
                ans+=e[i];
            }
            else{
                break;
            }
        }
        cout << accumulate(a.begin(), a.end(), 0LL)-ans << endl;
    }
    return 0;
}