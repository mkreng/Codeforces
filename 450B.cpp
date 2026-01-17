#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll MOD=1000000007;
    ll x, y, n;
    cin >> x >> y >> n;
    ll possible_ans[6]={x, y, y-x, -x, -y, x-y};
    cout << (possible_ans[(n-1)%6]%MOD+MOD)%MOD << endl;
    return 0;
}