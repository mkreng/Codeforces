#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, vint &a){
    int i1=upper_bound(a.begin(), a.end(), a[0]+2*x)-a.begin();
    int i2=lower_bound(a.begin(), a.end(), a[a.size()-1]-2*x)-a.begin();
    if(i1>=i2 || a[i2-1]-a[i1]<=2*x){
        return 1;
    }
    return 0;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint a(n);
        for(auto &i:a){
            cin >> i;
        }
        sort(a.begin(), a.end());
        int l=0, h=a[n-1];
        while(h-l>1){
            int mid=(h+l)/2;
            if(check(mid, a)){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        if(check(l, a)){
            cout << l << endl;
        }
        else{
            cout << h << endl;
        }
    }
    return 0;
}