#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
        int c, s;
        cin >> c >> s;
        cout << (s%c)*(s/c+1)*(s/c+1)+(c-s%c)*(s/c)*(s/c) << endl;
    }
    return 0;
}