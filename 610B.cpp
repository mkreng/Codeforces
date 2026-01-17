#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int len=0, maxlen=LONG_LONG_MIN, mn=*min_element(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(a[i]==mn){
            len=0;
            for(int j=0; j<n; j++){
                if(a[(i+j+1)%n]==mn){
                    len=j;
                    i+=j;
                    break;
                }
            }
            maxlen=max(maxlen, len);
        }
    }
    int ans=mn*n+maxlen;
    cout << ans << endl;
    return 0;
}