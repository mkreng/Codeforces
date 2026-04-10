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
    bool ans=false;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]){
            ans=1;
            cout << "YES\n" << s[i] << s[i+1] << endl;
            break;
        }
    }
    if(!ans){
        cout << "NO\n";
    }
    return 0;
}