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
        int ans=0;
        for(auto i:s){
            if(i=='('){
                ans++;
            }
            else{
                ans--;
            }
        }
        if(ans){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}