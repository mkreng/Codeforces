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
        long double px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        long double a1=sqrtl((px-ax)*(px-ax)+(py-ay)*(py-ay)), a2=sqrtl((px-bx)*(px-bx)+(py-by)*(py-by)), b1=sqrtl(ax*ax+ay*ay), b2=sqrtl(bx*bx+by*by), c=sqrtl((ax-bx)*(ax-bx)+(ay-by)*(ay-by))/2;
        long double ans1=max(a1, b1), ans2=max(a2, b2), ans3=max({c, min(a1, a2), min(b1, b2)});
        cout << fixed << setprecision(10) << min({ans1, ans2, ans3}) << endl;
    }
    return 0;
}