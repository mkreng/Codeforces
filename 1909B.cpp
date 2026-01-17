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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0;; i++){
            int firstbit=(a[0]>>i)&1;
            for(int j=1; j<n; j++){
                if(((a[j]>>i)&1)!=firstbit){
                    cout << (1LL<<(i+1)) << endl;
                    goto next;
                }
            }
        }
        next:
    }
    return 0;
}