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
        int x, y;
        cin >> x >> y;
        int o=0;
        if(x%2){
            o++;
        }
        if(y%2){
            o++;
        }
        if(o>1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}