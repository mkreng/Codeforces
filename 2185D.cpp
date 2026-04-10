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
        int n, m, h;
        cin >> n >> m >> h;
        vint a(n), diff(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            diff[i]=h-a[i];
        }
        vint b(m), c(m);
        for(int i=0; i<m; i++){
            cin >> b[i] >> c[i];
        }
        map<int, int> add;
        for(int i=0; i<m; i++){
            add[b[i]-1]+=c[i];
            if(add[b[i]-1]>diff[b[i]-1]){
                add.clear();
            }
        }
        for(int i=0; i<n; i++){
            cout << a[i]+add[i] << " ";
        }
        cout << endl;
    }
    return 0;
}