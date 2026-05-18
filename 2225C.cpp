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
        vector<vector<char>> a(2, vector<char> (n));
        for(int i=0; i<2; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        vint dp(n+1);
        dp[0]=0;
        for(int i=1; i<=n; i++){
            int temp1=dp[i-1], temp2=INT64_MAX;
            if(a[0][i-1]!=a[1][i-1]){
                temp1++;
            }
            if(i>1){
                temp2=dp[i-2];
                if(a[0][i-2]!=a[0][i-1]){
                    temp2++;
                }
                if(a[1][i-2]!=a[1][i-1]){
                    temp2++;
                }
            }
            dp[i]=min(temp1, temp2);
        }
        cout << dp[n] << endl;
    }
    return 0;
}