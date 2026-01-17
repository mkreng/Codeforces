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
    if(n!=0){
        ans+=3*n*(n+1);
    }
    cout << ans << endl;
    return 0;
}