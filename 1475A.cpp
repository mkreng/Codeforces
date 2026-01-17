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
        if(n%2==1){
            cout << "YES\n";
        }
        else{
            int temp=2;
            while(temp<n){
                temp*=2;
            }
            if(temp==n){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}