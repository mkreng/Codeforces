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
        if(n==1){
            cout << "0\n";
        }
        else if(n==2){
            cout << m << endl;
        }
        else{
            cout << 2*m << endl;
        }
    }
    return 0;
}