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
    int ans=0, c=0;
    for(int i=n-1; i>0; i--){
        ans+=i*(c+1);
        ans++;
        c++;
    }
    cout << ans+1 << endl;
    return 0;
}