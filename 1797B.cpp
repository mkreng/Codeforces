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
        vector<vint> a(n, vint (n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int km=0;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n; j++){
                if(!(i>n-i-1 || (i==n-i-1 && j>=n-j-1)) && a[i][j]!=a[n-i-1][n-j-1]){
                    km++;
                }
            }
        }
        if(km>k){
            cout << "NO\n";
        }
        else{
            if(n%2==1 || (k-km)%2==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}