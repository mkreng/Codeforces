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
        string x;
        cin >> x;
        cout << (x[0]-'0'-1)*10+(x.size()*(x.size()+1))/2 << endl;
    }
    return 0;
}