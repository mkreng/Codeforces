#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n==k){
        cout << string(n, '-') << endl;
        return;
    }
    int top=0;
    int bottom=0;
    for(int i=0; i<k; i++){
        if(s[i]=='0'){
            top++;
        }
        else if(s[i]=='1'){
            bottom++;
        }
    }
    int random=k-(top+bottom);
    string ans(n, '?');
    for(int i=1; i<=n; i++){
        if(i<=top || i>n-bottom){
            ans[i-1]='-';
        }
        else if(i>top+random && i<=n-(bottom+random)){
            ans[i-1]='+';
        }
    }
    cout << ans << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}