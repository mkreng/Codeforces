#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int sq(int x){
    int ans=sqrt(x);
    while(ans*ans<x){
        ans++;
    }
    return ans*ans;
}
void solve(vint &a, int m){
    if(m<0){
        return;
    }
    int s=sq(m);
    for(int i=m; i>=s-m; i--){
        a[i]=s-i;
    }
    solve(a, s-m-1);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint a(n);
        solve(a, n-1);
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}