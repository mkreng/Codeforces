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
        int b=0;
        for(int i=0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                b++;
            }
        }
        if(s[0]!=s[n-1]){
            b++;
        }
        cout << min(n, b+1) << endl;
    }
    return 0;
}