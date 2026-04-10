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
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        if(r%2+g%2+b%2+w%2<2){
            cout << "Yes\n";
        }
        else{
            if(r && g && b){
                r--;
                g--;
                b--;
                w+=3;
                if(r%2+g%2+b%2+w%2<2){
                    cout << "Yes\n";
                }
                else{
                    cout << "No\n";
                }
            }
            else{
                cout << "No\n";
            }
        }
    }
    return 0;
}