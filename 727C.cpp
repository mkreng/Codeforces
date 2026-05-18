#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
// #define endl "\n"
int ask(int l, int r){
    cout << "? " << l << " " << r << endl;
    int ans;
    cin >> ans;
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    for(int i=0; i<n-1; i++){
        a[i]=ask(i+1, n);
    }
    int temp=ask(1, 2);
    a[n-1]=(a[0]+a[1]+temp)/2-temp;
    cout << "! ";
    for(int i=0; i<n-1; i++){
        cout << a[i]-a[n-1] << " ";
    }
    cout << a[n-1] << endl;
    return 0;
}