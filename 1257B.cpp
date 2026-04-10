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
        if(x==1){
            if(y==1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else if(x==2 || x==3){
            if(y<4){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}