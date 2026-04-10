#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int sumd(int x){
    int ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int ans=0;
        for(int i=1; i<1000; i++){
            if(sumd(x+i)==i){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}