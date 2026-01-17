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
        int zero=0, one=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                zero++;
            }
            if(s[i]=='1'){
                one++;
            }
        }
        if(min(zero, one)%2){
            cout << "DA\n";
        }
        else{
            cout << "NET\n";
        }
    }
    return 0;
}