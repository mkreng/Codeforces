#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int l=lcm(x, y), lessb=b/l, lessa=a/l;
    if(a%l==0){
        lessa--;
    }
    cout << lessb-lessa << endl;
    return 0;
}