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
        string s;
        cin >> s;
        vector<bool> found(26, false);
        vint first(26, -1);
        for(int i=0; i<n; i++){
            if(found[s[i]-'a']==0){
                found[s[i]-'a']=1;
                first[s[i]-'a']=i;
            }
        }
        int ans=0;
        for(int i=0; i<26; i++){
            if(found[i]==1){
                ans+=n-first[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}