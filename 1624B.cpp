#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int req_a=2*b-c;
    if(req_a>=a && req_a%a==0 && req_a!=0){
        cout << "YES" << endl;
        return;
    }
    int req_b=(c+a)/2;
    if(req_b>=b && (c-a)%2==0 && req_b%b==0 && req_b!=0){
        cout << "YES" << endl;
        return;
    }
    int req_c=2*b-a;
    if(req_c>=c && req_c%c==0 && req_c!=0){
        cout << "YES" << endl;
        return;
    }
    cout << "NO\n";
    return;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}