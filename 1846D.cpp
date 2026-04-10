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
        int n, d, h;
        cin >> n >> d >> h;
        vint y(n);
        for(int i=0; i<n; i++){
            cin >> y[i];
        }
        double ans=0;
        for(int i=0; i<n-1; i++){
            if(y[i+1]-y[i]>=h){
                ans+=d*h/(double)(2);
            }
            else{
                ans+=(y[i+1]-y[i])*(d+(d*(h-y[i+1]+y[i])/(double)(h)))/(double)(2);
            }
        }
        ans+=d*h/(double)(2);
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}