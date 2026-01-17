#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int cube){
    int b=cbrt(cube);
    return b*b*b==cube;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        bool ans=false;
        for(int i=1; i*i*i<x; i++){
            if(check(x-i*i*i)){
                ans=true;
                break;
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}