#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int h, vint &a, int n, int x){
    int water=0;
    for(int i=0; i<n; i++){
        if(a[i]>=h){
            break;
        }
        water+=h-a[i];
    }
    if(water>x){
        return 0;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int low=1, high=2e9+7;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid, a, n, x)==0){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        if(check(high, a, n, x)==1){
            cout << high << endl;
        }
        else{
            cout << low << endl;
        }
    }
    return 0;
}