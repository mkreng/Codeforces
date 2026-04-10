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
        if(n==0 && m==0){
            cout << "0\n";
        }
        else if((n+m)%2){
            cout << "-1\n";
        }
        else{
            if(n==m){
                cout << "1 " << n << endl;
            }
            else{
                cout << "2 " << (n+m)/2 << " " << (n-m)/2 << endl;
            }
        }
    }
    return 0;
}