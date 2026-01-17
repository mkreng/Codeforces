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
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans=1;
    for(int i=0; i<n; i++){
        if(a[i]>=ans){
            a[i]=ans;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}