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
        bool odd=false, even=false;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2){
                odd=true;
            }
            else{
                even=true;
            }
        }
        if(odd && even){
            cout << "YES\n";
        }
        else if(odd){
            if(n%2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}