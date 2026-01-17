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
            for(int j=i; j<n-1-i; j++){
                int zero=0, one=0;
                char top=a[i][j];
                char right=a[j][n-1-i];
                char bottom=a[n-1-i][n-1-j];
                char left=a[n-1-j][i];
                if(top=='0'){
                    zero++;
                }
                else{
                    one++;
                }
                if(right=='0'){
                    zero++;
                }
                else{
                    one++;
                }
                if(bottom=='0'){
                    zero++;
                }
                else{
                    one++;
                }
                if(left=='0'){
                    zero++;
                }
                else{
                    one++;
                }
                ans+=min(one, zero);
            }
        }
        cout << ans << endl;
    }
    return 0;
}