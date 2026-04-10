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
        int n, m;
        cin >> n >> m;
        vector<string> a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        bool ans=true;
        for(int i=0; i<n; i++){
            int ra=0, rb=0;
            for(int j=0; j<m; j++){
                ra+=a[i][j]-'0';
            }
            for(int j=0; j<m; j++){
                rb+=b[i][j]-'0';
            }
            if(ra%3!=rb%3){
                ans=false;
                break;
            }
        }
        if(ans){
            for(int i=0; i<m; i++){
                int ca=0, cb=0;
                for(int j=0; j<n; j++){
                    ca+=a[j][i]-'0';
                }
                for(int j=0; j<n; j++){
                    cb+=b[j][i]-'0';
                }
                if(ca%3!=cb%3){
                    ans=false;
                    break;
                }
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}