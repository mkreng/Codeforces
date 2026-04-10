#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a;
    cin >> n >> m >> a;
    int tempa=n/a, tempb=m/a;
    if(n%a!=0){
        tempa++;
    }
    if(m%a!=0){
        tempb++;
    }
    cout << tempa*tempb << endl;
    return 0;
}