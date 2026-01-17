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
        vector<vector<int>> v(m), prefix(m);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int temp;
                cin >> temp;
                v[j].push_back(temp);
            }
        }
        for(int i=0; i<m; i++){
            sort(v[i].begin(), v[i].end());
            prefix[i].push_back(0);
            for(int j=0; j<n; j++){
                int temp=prefix[i][j]+v[i][j];
                prefix[i].push_back(temp);
            }
        }
        int ans=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans+=v[i][j]*(j+1)-prefix[i][j+1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}