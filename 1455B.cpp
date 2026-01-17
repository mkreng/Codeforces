#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int x;
bool check(int n){
    return (n*(n+1))/2>=x;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> x;
        int low=1, high=1414;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        int ans=high;
        if(check(low)){
            ans=low;
        }
        if((ans*(ans+1))/2==x+1){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}