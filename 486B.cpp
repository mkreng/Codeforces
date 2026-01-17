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
    int b[m][n], a[m][n], c[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> b[i][j];
            a[i][j]=1;
            c[i][j]=0;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i][j]==0){
                for(int k=0; k<m; k++){
                    a[k][j]=0;
                }
                for(int k=0; k<n; k++){
                    a[i][k]=0;
                }
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==1){
                for(int k=0; k<m; k++){
                    c[k][j]=1;
                }
                for(int k=0; k<n; k++){
                    c[i][k]=1;
                }
            }
        }
    }
    bool ans=true;
    for(int i=0; i<m; i++){
        if(!ans){
            break;
        }
        for(int j=0; j<n; j++){
            if(b[i][j]!=c[i][j]){
                ans=false;
                break;
            }
        }
    }
    if(ans){
        cout << "YES\n";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "NO\n";
    }
    return 0;
}