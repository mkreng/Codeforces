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
    for(auto &i:a){
        cin >> i;
    }
    sort(a.begin(), a.end());
    swap(a[0], a[n-1]);
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}