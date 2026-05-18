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
        string s;
        cin >> s;
        int b=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                b++;
            }
        }
        if(b<3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}