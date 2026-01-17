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
        vector<vector<char>> a(n, vector<char> (n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int ans=0;
        for(int i=0; i<n/2; i++){
            for(int j=i; j<n-i-1; j++){
                char top=a[i][j];
                char right=a[j][n-i-1];
                char bottom=a[n-i-1][n-j-1];
                char left=a[n-j-1][i];
                int mx=max(max(top, right), max(bottom, left));
                ans+=4*mx-(top+right+bottom+left);
            }
        }
        cout << ans << endl;
    }
    return 0;
}