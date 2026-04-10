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
        int x, y, z;
        cin >> x >> y >> z;
        if(x!=y){
            if(z==max(x, y)){
                cout << "YES\n" << min(x, y) << " " << x << " " << y << endl;
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            if(z>x){
                cout << "NO\n";
            }
            else{
                cout << "YES\n" << x << " " << z << " " << z << endl;
            }
        }
    }
    return 0;
}