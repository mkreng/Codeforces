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
        s="0"+s;
        int changes=0, curr=s[0];
        for(int i=1; i<=n; i++){
            if(s[i]!=curr){
                changes++;
            }
            curr=s[i];
        }
        if(changes>2){
            cout << n+changes-2 << endl;;
        }
        else if(changes==2){
            cout << n+changes-1 << endl;
        }
        else{
            cout << n+changes << endl;
        }
    }
    return 0;
}