#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char> (m));
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++){
                a[i][j]='#';
            }
        }
        else{
            if(((i+1)/2)%2==0){
                a[i][0]='#';
                for(int j=1; j<m; j++){
                    a[i][j]='.';
                }
            }
            else{
                for(int j=0; j<m-1; j++){
                    a[i][j]='.';
                }
                a[i][m-1]='#';
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}