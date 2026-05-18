#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, int m, int n, vint &t, vint &z, vint &y){
    int q=0;
    for(int i=0; i<n; i++){
        q+=x/(t[i]*z[i]+y[i])*z[i]+min(z[i], (x%(t[i]*z[i]+y[i]))/t[i]);
    }
    return q>=m;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    vint t(n), z(n), y(n);
    for(int i=0; i<n; i++){
        cin >> t[i] >> z[i] >> y[i];
    }
    int high=1e10, low=0;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, m, n, t, z, y)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    int ans=high;
    if(check(low, m, n, t, z, y)){
        ans=low;
    }
    cout << ans << endl;
    vint b(n);
    int r=m;
    for(int i=0; i<n; i++){
        int c=ans/(t[i]*z[i]+y[i])*z[i]+min(z[i], (ans%(t[i]*z[i]+y[i]))/t[i]);
        int o=min(r, c);
        cout << o << " ";
        r-=o;
    }
    cout << endl;
    return 0;
}