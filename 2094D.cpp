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
        string p, s;
        cin >> p >> s;
        bool ans=true;
        if(s.size()<p.size()){
            ans=false;
        }
        else{
            int x=0, y=0;
            while(y!=s.size()){
                int plen=0, slen=0;
                char pcurr=p[x], scurr=s[y];
                if(pcurr!=scurr){
                    ans=false;
                    break;
                }
                while(pcurr==p[x]){
                    x++;
                    plen++;
                }
                while(scurr==s[y]){
                    y++;
                    slen++;
                }
                if(slen<plen || slen>2*plen){
                    ans=false;
                    break;
                }
            }
            if(x!=p.size()){
                ans=false;
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