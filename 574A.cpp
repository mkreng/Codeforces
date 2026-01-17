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
    int ans=0;
    while(a[0]<=*max_element(a.begin()+1, a.end())){
        a[0]+=1;
        *max_element(a.begin()+1, a.end())-=1;
        ans++;
    }
    cout << ans << endl;
    return 0;
}