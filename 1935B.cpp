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
        vint p(n), s(n), seenp(n+1, false), seens(n+1, false);
        int mexp=0, mexs=0;
        for(int i=0; i<n; i++){
            if(a[i]<=n){
                seenp[a[i]]=true;
            }
            while(seenp[mexp]){
                mexp++;
            }
            p[i]=mexp;
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]<=n){
                seens[a[i]]=true;
            }
            while(seens[mexs]){
                mexs++;
            }
            s[i]=mexs;
        }
        int ans=-1;
        for(int i=0; i<n-1; i++){
            if(p[i]==s[i+1]){
                ans=i;
                break;
            }
        }
        if(ans==-1){
            cout << "-1\n";
        }
        else{
            cout << "2\n1 " << ans+1 << endl << ans+2 << " " << n << endl;
        }
    }
    return 0;
}