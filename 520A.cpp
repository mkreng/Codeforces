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
    string s;
    cin >> s;
    vint f(26, 0);
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            f[s[i]-'a']++;
        }
        else{
            f[s[i]-'A']++;
        }
    }
    bool ans=1;
    for(auto i:f){
        if(i==0){
            ans=0;
            break;
        }
    }
    if(ans){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}