#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            a[i]+=i+1;
        }
        sort(a.begin(), a.end());
        int ans=n;
        for(int i=0; i<n; i++){
            c-=a[i];
            if(c<0){
                ans=i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}