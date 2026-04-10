#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> ans={"walk", "no", "no", "no", "yes", "yes", "backwards", "seven"};
    int n;
    cin >> n;
    cout << ans[n-1] << endl;
    return 0;
}