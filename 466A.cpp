#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(a*m<=b){
        cout << n*a << endl;
    }
    else{
        int rides=n/m;
        int ans1=rides*b, ans2=ans1;
        ans1+=(n%m)*a;
        if(n%m!=0){
            ans2+=b;
        }
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}