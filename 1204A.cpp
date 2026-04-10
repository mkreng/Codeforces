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
    int ans=s.size()/2;
    if(s.size()%2){
        ans++;
    }
    bool red=true;
    for(int i=1; i<s.size(); i++){
        if(s[i]=='1'){
            red=false;
            break;
        }
    }
    if((s.size()-1)%2){
        red=false;
    }
    if(red){
        ans--;
    }
    cout << ans << endl;
    return 0;
}