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
        vint a(n), b(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        int before=0;
        for(int i=0; i<n; i++){
            before^=a[i];
        }
        int bor=0;
        for(int i=0; i<m; i++){
            bor|=b[i];
        }
        for(int i=0; i<n; i++){
            a[i]|=bor;
        }
        int after=0;
        for(int i=0; i<n; i++){
            after^=a[i];
        }
        if(n%2){
            cout << before << " " << after << endl;
        }
        else{
            cout << after << " " << before << endl;
        }
    }
    return 0;
}