#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    vector<vint> t(m, vint (n)), p(m, vint (n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> t[i][j];
        }
    }
    p[0][0]=t[0][0];
    for(int i=1; i<m; i++){
        p[i][0]=p[i-1][0]+t[i][0];
    }
    for(int i=1; i<n; i++){
        p[0][i]=p[0][i-1]+t[0][i];
    }
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            p[i][j]=max(p[i-1][j], p[i][j-1])+t[i][j];
        }
    }
    for(int i=0; i<m; i++){
        cout << p[i][n-1] << " ";
    }
    cout << endl;
    return 0;
}