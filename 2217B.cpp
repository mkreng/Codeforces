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
        for(auto &i:a){
            cin >> i;
        }
        int p;
        cin >> p;
        int l=0, r=0;
        if(p!=1 && a[0]!=a[p-1]){
            l++;
        }
        for(int i=0; i<p-1; i++){
            if(a[i]==a[p-1] && a[i+1]!=a[p-1]){
                l++;
            }
        }
        if(p!=n && a[p]!=a[p-1]){
            r++;
        }
        for(int i=p; i<n-1; i++){
            if(a[i]==a[p-1] && a[i+1]!=a[p-1]){
                r++;
            }
        }
        cout << 2*max(l, r) << endl;
    }
    return 0;
}