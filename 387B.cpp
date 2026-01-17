#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vint a(n), b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int x=n-1, y=m-1, ans=0;
    while(x>=0 && y>=0){
        if(a[x]>b[y]){
            ans++;
            x--;
        }
        else{
            x--;
            y--;
        }
    }
    ans+=x+1;
    cout << ans << endl;
    return 0;
}