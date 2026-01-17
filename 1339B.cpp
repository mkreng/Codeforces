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
        int n;
        cin >> n;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l=(n-1)/2, r=l+1;
        while(l>=0 || r<n){
            if(l>=0){
                cout << a[l] << " ";
                l--;
            }
            if(r<n){
                cout << a[r] << " ";
                r++;
            }
        }
        cout << endl;
    }
    return 0;
}