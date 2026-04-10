#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int n;
int ans=INT64_MAX;
void solve(int c, int f, int s){
    if(f+s>10){
        return;
    }
    if(f==s && f>0 && c>=n){
        ans=min(ans, c);
    }
    solve(10*c+4, f+1, s);
    solve(10*c+7, f, s+1);
}
int32_t main(){
    cin >> n;
    solve(0, 0, 0);
    cout << ans << endl;
    return 0;
}