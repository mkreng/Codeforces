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
        for(auto &i:a){
            cin >> i;
        }
        int l=0, r=0;
        for(int i=0; i<n; i++){
            if(a[l]<r-l+1){
                l++;
            }
            cout << r-l+1 << " ";
            r++;
        }
        cout << endl;
    }
    return 0;
}