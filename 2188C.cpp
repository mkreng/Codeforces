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
        bool s=true;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i!=0 && a[i]<a[i-1]){
                s=false;
            }
        }
        if(s){
            cout << "-1\n";
        }
        else{
            vint b=a;
            sort(b.begin(), b.end());
            int ans=INT64_MAX;
            for(int i=0; i<n; i++){
                if(a[i]!=b[i]){
                    ans=min(ans, max(a[i]-b[0], b[n-1]-a[i]));
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}