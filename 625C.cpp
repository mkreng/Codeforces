#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int ans[n][n];
    int val=n*n, m=0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=k-1; j--){
            ans[i][j]=val;
            if(j==k-1){
                m+=val;
            }
            val--;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=k-2; j>=0; j--){
            ans[i][j]=val;
            val--;
        }
    }
    cout << m << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}