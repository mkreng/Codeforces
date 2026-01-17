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
        int n, q;
        cin >> n >> q;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vint prefix(n+1, 0);
        for(int i=1; i<=n; i++){
            prefix[i]=prefix[i-1]+a[i-1];
        }
        vint prefixmax(n, a[0]);
        for(int i=1; i<n; i++){
            prefixmax[i]=max(prefixmax[i-1], a[i]);
        }
        while(q--){
            int k;
            cin >> k;
            int position=upper_bound(prefixmax.begin(), prefixmax.end(), k)-prefixmax.begin();
            if(position>=0){
                cout << prefix[position] << " ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}