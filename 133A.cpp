#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}
int main(){
    solve();
    return 0;
}