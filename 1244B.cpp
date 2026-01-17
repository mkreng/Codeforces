#include <bits/stdc++.h>
using namespace std;
void mx(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=n;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            ans=max(ans, 2*(i+1));
            ans = max(ans, 2*(n-i));
        }
    }
    cout << ans << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        mx();
    }
    return 0;
}