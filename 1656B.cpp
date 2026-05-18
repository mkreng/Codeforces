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
        int n, k;
        cin >> n >> k;
        vint a(n);
        for(auto &i:a){
            cin >> i;
        }
        sort(a.begin(), a.end());
        bool ans=0;
        if(n==1){
            if(a[0]==k){
                ans=1;
            }
        }
        else{
            int x=0, y=1;
            while(x<n && y<n){
                if(a[y]-a[x]==k){
                    ans=1;
                    break;
                }
                else if(a[y]-a[x]>k){
                    x++;
                }
                else{
                    y++;
                }
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}