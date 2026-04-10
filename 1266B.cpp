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
        int x;
        cin >> x;
        if(x>=14 && x%14>=1 && x%14<=6){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}