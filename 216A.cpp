#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    cout << a*b*c-(a-1)*(b-1)*(c-1) << endl;
    return 0;
}