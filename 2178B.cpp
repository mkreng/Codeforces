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
        string r;
        cin >> r;
        int ans=0;
        if(r[0]=='u'){
            ans++;
            r[0]='s';
        }
        if(r[r.size()-1]=='u'){
            ans++;
            r[r.size()-1]='s';
        }
        for(int i=1; i<r.size()-1; i++){
            if(r[i]=='u'){
                if(r[i-1]=='u'){
                    ans++;
                    r[i-1]='s';
                }
                if(r[i+1]=='u'){
                    ans++;
                    r[i+1]='s';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}