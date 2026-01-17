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
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vint ans;
    if(a[n-1]>=a[n-2]+a[n-3]){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        for(int i=n-1; i>=0; i-=2){
            cout << a[i] << " ";
        }
        for(int i=n%2; i<n; i+=2){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}