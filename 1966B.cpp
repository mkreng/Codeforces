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
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char temp;
                cin >> temp;
                grid[i].push_back(temp);
            }
        }
        bool ans=true, tr=true, br=true, lc=true, rc=true;
        for(int i=0; i<m-1; i++){
            if(grid[0][i]!=grid[0][i+1]){
                tr=false;
                break;
            }
        }
        for(int i=0; i<m-1; i++){
            if(grid[n-1][i]!=grid[n-1][i+1]){
                br=false;
                break;
            }
        }
        for(int i=0; i<n-1; i++){
            if(grid[i][0]!=grid[i+1][0]){
                lc=false;
                break;
            }
        }
        for(int i=0; i<n-1; i++){
            if(grid[i][m-1]!=grid[i+1][m-1]){
                rc=false;
                break;
            }
        }
        if(tr && br && grid[0][0]!=grid[n-1][0]){
            ans=false;
        }
        if(lc && rc && grid[0][0]!=grid[0][m-1]){
            ans=false;
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