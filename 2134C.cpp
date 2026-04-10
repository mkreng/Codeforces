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
        int ans=0;
        for(int i=1; i<n; i+=2){
            if(i!=n-1 && a[i]<a[i-1]+a[i+1]){
                int diff=a[i-1]+a[i+1]-a[i];
                ans+=diff;
                if(diff<=a[i+1]){
                    a[i+1]-=diff;
                }
                else{
                    diff-=a[i+1];
                    a[i+1]=0;
                    a[i-1]-=diff;
                }
            }
            if(i==n-1 && a[i]<a[i-1]){
                ans+=a[i-1]-a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}