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
    if(n==1){
        cout << "1\n";
    }
    else{
        if(m<=n-m){
            cout << m+1 << endl;
        }
        else{
            cout << m-1 << endl;
        }
    }
    return 0;
}