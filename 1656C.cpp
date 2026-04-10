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
        bool o=false, c=false;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                o=1;
            }
            if(i<n-1 && a[i]+1==a[i+1]){
                c=1;
            }
        }
        if(o && c){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}