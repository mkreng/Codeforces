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
        vint b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        vint m(n-1, b[0]);
        for(int i=1; i<n-1; i++){
            m[i]=min(m[i-1], b[i]);
        }
        bool ans=true;
        for(int i=1; i<n; i++){
            if(b[i]>=2*m[i-1]){
                ans=false;
                break;
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}