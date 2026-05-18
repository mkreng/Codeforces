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
        int n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        if(n==2 || n==3){
            cout << "1\n";
        }
        else{
            cout << min(abs(x1-x2), n-abs(x1-x2))+k << endl;
        }
    }
    return 0;
}