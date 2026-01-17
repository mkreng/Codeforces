#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, int n, vint &l){
    int i=upper_bound(l.begin(), l.end(), x)-l.begin();
    return n-i>=x;
}
bool exactcheck(int x, int n, vint &l){
    int i=upper_bound(l.begin(), l.end(), x)-l.begin();
    return n-i==x;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint l(n);
        for(int i=0; i<n; i++){
            cin >> l[i];
        }
        sort(l.begin(), l.end());
        int ans=-1, low=0, high=n;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid, n, l)){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        if(exactcheck(high, n, l)){
            ans=high;
        }
        else if(exactcheck(low, n, l)){
            ans=low;
        }
        cout << ans << endl;
    }
    return 0;
}