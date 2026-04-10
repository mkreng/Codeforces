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
        int n, h, l;
        cin >> n >> h >> l;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int r=0, c=0;
        for(int i=0; i<n; i++){
            if(a[i]<=h){
                r++;
            }
            if(a[i]<=l){
                c++;
            }
        }
        if(h<l){
            cout << min(r, c/2) << endl;
        }
        else{
            cout << min(c, r/2) << endl;
        }
    }
    return 0;
}