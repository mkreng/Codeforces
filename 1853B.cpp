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
        int ans=0;
        for(int i=n; i>=0; i--){
            int first=n, second=i;
            bool exist=true;
            for(int j=2; j<k; j++){
                int third=first-second;
                if(third>second || third<0){
                    exist=false;
                    break;
                }
                first=second;
                second=third;
            }
            if(exist){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}