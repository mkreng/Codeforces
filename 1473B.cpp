#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while(q--){
        string s, t;
        cin >> s >> t;
        string a="", b="";
        for(int i=0; i<(lcm(s.size(), t.size()))/s.size(); i++){
            a+=s;
        }
        for(int i=0; i<(lcm(s.size(), t.size()))/t.size(); i++){
            b+=t;
        }
        if(a==b){
            cout << a << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}