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
        int n, x;
        cin >> n >> x;
        int odd=0, even=0;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        bool ans=false;
        for(int i=1; i<=min(odd, x); i+=2){
            if(even>=x-i){
                ans=true;
                break;
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