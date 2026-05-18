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
        vint a(n);
        for(auto &i:a){
            cin >> i;
            i=100/i;
        }
        sort(a.begin(), a.end());
        int r=0;
        bool ans=1;
        for(auto i:a){
            if(i>r+1){
                ans=0;
                break;
            }
            else{
                r+=100;
            }
        }
        if(ans){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}