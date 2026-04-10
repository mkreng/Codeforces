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
        int ans=INT64_MIN, temp=n;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<temp; j++){
                sum+=a[j];
            }
            if(i==0){
                ans=max(ans, sum);
            }
            else{
                ans=max(ans, max(sum, -sum));
            }
            for(int j=0; j<temp-1; j++){
                a[j]=a[j+1]-a[j];
            }
            temp--;
        }
        cout << ans << endl;
    }
    return 0;
}