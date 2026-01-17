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
        vint a(n), as(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> as[i];
        }
        int ldiff=0, rdiff=n-1;
        while(ldiff<n && a[ldiff]==as[ldiff]){
            ldiff++;
        }
        while(rdiff>=0 && a[rdiff]==as[rdiff]){
            rdiff--;
        }
        if(ldiff==n){
            cout << "1 " << n << endl;
        }
        else{
            while(ldiff>=1 && a[ldiff-1]<=as[ldiff]){
                ldiff--;
            }
            while(rdiff<n-1 && a[rdiff+1]>=as[rdiff]){
                rdiff++;
            }
            cout << ldiff+1 << " " << rdiff+1 << endl;
        }
    }
    return 0;
}