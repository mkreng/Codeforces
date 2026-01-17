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
    vint heavy, metal;
    for(int i=0; i+4<s.size(); i++){
        if(s[i]=='h' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='y'){
            heavy.push_back(i);
        }
        if(s[i]=='m' && s[i+1]=='e' && s[i+2]=='t' && s[i+3]=='a' && s[i+4]=='l'){
            metal.push_back(i);
        }
    }
    vint prefix(s.size(), 0);
    for(int i=0; i<heavy.size(); i++){
        prefix[heavy[i]]++;
    }
    for(int i=1; i<s.size(); i++){
        prefix[i]+=prefix[i-1];
    }
    int ans=0;
    for(int i=0; i<metal.size(); i++){
        ans+=prefix[metal[i]];
    }
    cout << ans << endl;
    return 0;
}