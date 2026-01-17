#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int k, q;
    cin >> k >> q;
    vector<int> a(k);
    for(int i=0; i<k; i++){
        cin >> a[i];
    }
    while(q--){
        int n;
        cin >> n;
        cout << min(a[0]-1, n) << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}