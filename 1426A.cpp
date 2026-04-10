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
        int n, x;
        cin >> n >> x;
        if(n==1 || n==2){
            cout << "1\n";
        }
        else{
            cout << (n-3)/x+2 << endl;
        }
    }
    return 0;
}