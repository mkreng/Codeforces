#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vint x(4);
    for(int i=0; i<4; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    cout << x[3]-x[0] << " " << x[3]-x[1] << " " << x[3]-x[2] << endl;
    return 0;
}