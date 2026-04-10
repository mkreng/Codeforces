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
        for(int i=2;; i++){
            if(n%i){
                cout << i-1 << endl;
                break;
            }
        }
    }
    return 0;
}