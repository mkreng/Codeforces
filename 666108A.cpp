#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int ans(int a){
    vint digits;
    int t=a;
    while(a){
        digits.push_back(a%10);
        a/=10;
    }
    return t*accumulate(digits.begin(), digits.end(), 0LL);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        cout << ans(a[i]) << endl;
    }
    return 0;
}