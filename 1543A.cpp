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
        int a, b;
        cin >> a >> b;
        if(a==b){
            cout << "0 0\n";
        }
        else{
            int diff=abs(a-b);
            int ans=0;
            if(a%diff!=0){
                ans=min(a%diff, diff-a%diff);
            }
            cout << diff << " " << ans << endl;
        }
    }
    return 0;
}