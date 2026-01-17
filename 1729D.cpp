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
        vint x(n), y(n), a(n);
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        for(int i=0; i<n; i++){
            cin >> y[i];
        }
        for(int i=0; i<n; i++){
            a[i]=y[i]-x[i];
        }
        sort(a.begin(), a.end());
        int i=0, j=n-1, ans=0;
        while(i<j){
            if(a[i]+a[j]>=0){
                ans++;
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}