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
        int n, m;
        cin >> n >> m;
        vint r(m, 0);
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            r[temp%m]++;
        }
        int ans=0;
        if(r[0]>0){
            ans++;
        }    
        if(m%2==0 && r[m/2]>0){
            ans++;
        }
        for(int i=1; i<(m+1)/2; i++){
            if(r[i]==0 && r[m-i]==0){
                continue;
            }
            if(r[i]==r[m-i]){
                ans++;
            }
            else{
                ans+=abs(r[i]-r[m-i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}