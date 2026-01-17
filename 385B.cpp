#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vint bear;
    int ans=0, last=-1;
    for(int i=0; i<s.size(); i++){
        if(i+3<s.size() && s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r'){
            ans+=(i-last)*(s.size()-i-3);
            last=i;
        }
    }
    cout << ans << endl;
    return 0;
}