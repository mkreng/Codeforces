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
        int n, k;
        cin >> n >> k;
        vint c(n);
        for(int i=0; i<n; i++){
            cin >> c[i];
        }
        vint last(k, -1), largest(k, 0), secondlargest(k, 0);
        for(int i=0; i<n; i++){
            int len=i-last[c[i]-1];
            if(len>largest[c[i]-1]){
                secondlargest[c[i]-1]=largest[c[i]-1];
                largest[c[i]-1]=len;
            }
            else if(len>secondlargest[c[i]-1]){
                secondlargest[c[i]-1]=len;
            }
            last[c[i]-1]=i;
        }
        for(int i=0; i<k; i++){
            int len=n-last[i];
            if(len>largest[i]){
                secondlargest[i]=largest[i];
                largest[i]=len;
            }
            else if(len>secondlargest[i]){
                secondlargest[i]=len;
            }
        }
        int ans=LONG_LONG_MAX;
        for(int i=0; i<k; i++){
            ans=min(ans, max((largest[i]+1)/2, secondlargest[i]));
        }
        cout << ans-1 << endl;
    }
    return 0;
}