#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double h, l;
    cin >> h >> l;
    cout << fixed << setprecision(13) << (l*l-h*h)/(2*h) << endl;
    return 0;
}