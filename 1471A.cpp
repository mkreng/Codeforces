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
        int n, x;
        cin >> n >> x;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int sum_min=0, sum_max=0;
        for(int i=0; i<n; i++){
            sum_min+=a[i];
        }
        int ans_min=sum_min/x;
        if(sum_min%x!=0){
            ans_min++;
        }
        int ans_max=0;
        for(int i=0; i<n; i++){
            ans_max+=a[i]/x;
            if(a[i]%x!=0){
                ans_max++;
            }
        }
        cout << ans_min << " " << ans_max << endl;
    }
    return 0;
}