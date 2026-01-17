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
        int zero=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                zero++;
            }
        }
        if(zero==1){
            cout << "BOB\n";
        }
        else if(zero%2){
            cout << "ALICE\n";
        }
        else{
            cout << "BOB\n";
        }
    }
    return 0;
}