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
        int ans;
        if(n%2){
            ans=(k-1+(n%2)*((k-1)/(n/2)))%n+1;
        }
        else{
            ans=((k-1)%n)+1;
        }
        cout << ans << endl;
    }
    return 0;
}