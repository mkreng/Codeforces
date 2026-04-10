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
        int ans=0, mx=-1;
        for(int i=0; i<n; i++){
            mx=max(mx, a[i]);
            ans+=mx;
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int swap=0, mxele=-1;
                for(int k=0; k<n; k++){
                    if(k==i){
                        mxele=max(mxele, a[j]);
                    }
                    else if(k==j){
                        mxele=max(mxele, a[i]);
                    }
                    else{
                        mxele=max(mxele, a[k]);
                    }
                    swap+=mxele;
                }
                ans=max(ans, swap);
            }
        }
        cout << ans << endl;
    }
    return 0;
}