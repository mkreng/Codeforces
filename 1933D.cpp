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
        sort(a.begin(), a.end());
        if(a[0]!=a[1]){
            cout << "YES\n";
        }
        else{
            bool ans=0;
            for(int i=2; i<n; i++){
                if(a[i]%a[0]!=0){
                    cout << "YES\n";
                    ans=1;
                    break;
                }
            }
            if(!ans){
                cout << "NO\n";
            }
        }
    }
    return 0;
}