#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    vector<vint> freq(26);
    int ans=1;
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a'].push_back(i);
    }
    int j=0;
    for(int i=0; i<t.size(); i++){
        auto temp=lower_bound(freq[t[i]-'a'].begin(), freq[t[i]-'a'].end(), j);
        if(temp==freq[t[i]-'a'].end()){
            ans++;
            j=freq[t[i]-'a'][0]+1;
        }
        else{
            j=*temp+1;
        }
    }
    cout << ans << endl;
    return 0;
}