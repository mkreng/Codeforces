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
    vint a(n), b(n-1), c(n-2);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++){
        cin >> b[i];
    }
    for(int i=0; i<n-2; i++){
        cin >> c[i];
    }
    int suma=accumulate(a.begin(), a.end(), 0LL);
    int sumb=accumulate(b.begin(), b.end(), 0LL);
    int sumc=accumulate(c.begin(), c.end(), 0LL);
    cout << suma-sumb << endl << sumb-sumc << endl;
    return 0;
}