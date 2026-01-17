#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int trap=n*n-k;
    if(trap==1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    char grid[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            grid[i][j]='U';
        }
    }
    int left=trap;
    for(int i=n-1; i>=0 && left>0; i--){
        if(min(n, left) == 1){
            grid[i][n-1]='D';
        }
        else{
            for(int j=n-min(n, left); j<n-1; j++){
                grid[i][j]='R';
            }
            grid[i][n-1]='L';
        }
        left-=min(n, left);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}