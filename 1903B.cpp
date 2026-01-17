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
        vector<vint> m(n, vint (n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> m[i][j];
            }
        }
        vint a(n, (1<<30)-1);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    a[i]&=m[i][j];
                    a[j]&=m[i][j];
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((a[i]|a[j])!=m[i][j]){
                    cout << "NO\n";
                    goto next;
                }
            }
        }
        cout << "YES\n";
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
        next:
    }
    return 0;
}