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
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        int x=m/a*6, y=m/b*6, z=m/c*6;
        x-=m/lcm(a, b)*3;
        x-=m/lcm(a, c)*3;
        x+=m/lcm(lcm(a, b), c)*2;
        y-=m/lcm(a, b)*3;
        y-=m/lcm(b, c)*3;
        y+=m/lcm(lcm(a, b), c)*2;
        z-=m/lcm(a, c)*3;
        z-=m/lcm(b, c)*3;
        z+=m/lcm(lcm(a, b), c)*2;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}