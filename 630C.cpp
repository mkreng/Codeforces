#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans=1;
    while(n--){
        ans*=2;
    }
    ans--;
    ans*=2;
    cout << ans << endl;
    return 0;
}