#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int n, s, diff;
bool check(int m, vint &pre_left, vint &pre_right){
    int maxred=0;
    for(int i=0; i<=m; i++){
        int red=pre_right[m-i]+pre_left[i];
        maxred=max(maxred, red);
        if(maxred>=diff){
            return true;
        }
    }
    return maxred>=diff;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> s;
        vint a(n), pre_left(n+1, 0), pre_right(n+1, 0);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        diff=accumulate(a.begin(), a.end(), 0LL)-s;
        if(diff<0){
            cout << "-1\n";
        }
        else{
            for(int i=1; i<=n; i++){
                pre_left[i]=pre_left[i-1]+a[i-1];
                pre_right[i]=pre_right[i-1]+a[n-i];
            }
            int low=0, high=n;
            while(high-low>1){
                int mid=(high+low)/2;
                if(check(mid, pre_left, pre_right)){
                    high=mid;
                }
                else{
                    low=mid+1;
                }
            }
            if(check(low, pre_left, pre_right)){
                cout << low << endl;
            }
            else{
                cout << high << endl;
            }
        }
    }
    return 0;
}