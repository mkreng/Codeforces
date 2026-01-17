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
    int ans=0;
    while(n--){
        string s;
        cin >> s;
        if(s[0]=='T'){
            ans+=4;
        }
        if(s[0]=='C'){
            ans+=6;
        }
        if(s[0]=='O'){
            ans+=8;
        }
        if(s[0]=='D'){
            ans+=12;
        }
        if(s[0]=='I'){
            ans+=20;
        }
    }
    cout << ans << endl;
    return 0;
}