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
        int n, m;
        cin >> n >> m;
        vint a(n);
        for(auto &i:a){
            cin >> i;
        }
        int l=1;
        bool ans=0;
        for(int i=0; i<n-1; i++){
            if(a[i]==a[i+1]){
                l++;
                if(l>=m){
                    ans=1;
                    break;
                }
            }
            else{
                l=1;
            }
        }
        if(ans){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}