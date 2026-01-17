#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<pair<char, char>> d(m);
    for(int i=0; i<m; i++){
        char x, y;
        cin >> x >> y;
        d[i].first=x;
        d[i].second=y;
    }
    vector<char> l(26);
    for(int i=0; i<26; i++){
        l[i]='a'+i;
        for(int j=0; j<m; j++){
            char current=l[i];
            if(current==d[j].first){
                l[i]=d[j].second;
            }
            if(current==d[j].second){
                l[i]=d[j].first;
            }
        }
    }
    for(int i=0; i<n; i++){
        s[i]=l[s[i]-'a'];
    }
    cout << s << endl;
    return 0;
}