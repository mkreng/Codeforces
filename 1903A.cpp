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
        vint a(n);
        for(auto &i:a){
            cin >> i;
        }
        bool s=true;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                s=false;
                break;
            }
        }
        if(s || k>1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}