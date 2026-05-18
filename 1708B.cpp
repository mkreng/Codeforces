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
        int n, l, r;
        cin >> n >> l >> r;
        vint a(n);
        bool ans=1;
        for(int i=1; i<=n; i++){
            a[i-1]=(l+i-1)/i*i;
            if(a[i-1]>r){
                ans=0;
                break;
            }
        }
        if(ans){
            cout << "YES\n";
            for(auto &i:a){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}