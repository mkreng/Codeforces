#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans=-1, minsum=__LONG_LONG_MAX__;
    for(int i=0; i<k; i++){
        int sum=0;
        for(int j=i; j<n; j+=k){
            sum+=a[j];
        }
        if(sum<minsum){
            minsum=sum;
            ans=i+1;
        }
    }
    cout << ans << endl;
    return 0;
}