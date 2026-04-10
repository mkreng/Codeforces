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
        int n;
        cin >> n;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vint prefix(n+1, 0);
        for(int i=1; i<=n; i++){
            prefix[i]=prefix[i-1]+a[i-1];
        }
        string s;
        cin >> s;
        int j=0, k=n-1, ans=0;
        while(j<k){
            while(j<k && s[j]!='L'){
                j++;
            }
            while(j<k && s[k]!='R'){
                k--;
            }
            if(j<k && s[j]=='L' && s[k]=='R'){
                ans+=prefix[k+1]-prefix[j];
                j++;
                k--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}