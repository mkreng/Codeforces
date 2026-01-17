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
        int n, x, y;
        cin >> n >> x >> y;
        vint a(n, 1);
        for(int i=y-2; i>=0; i-=2){
            a[i]=-1;
        }
        for(int i=x; i<n; i+=2){
            a[i]=-1;
        }
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}