#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(double m, int n, int s, vint &x, vint &y, vint &k){
    int p=s;
    for(int i=0; i<n; i++){
        if(x[i]*x[i]+y[i]*y[i]<=m*m){
            p+=k[i];
        }
    }
    return p>=1000000;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s;
    cin >> n >> s;
    vint x(n), y(n), k(n);
    int mxp=s;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i] >> k[i];
        mxp+=k[i];
    }
    if(mxp<1000000){
        cout << "-1\n";
    }
    else{
        double low=0, high=15000;
        for(int i=0; i<100; i++){
            double mid=(high+low)/2;
            if(check(mid, n, s, x, y, k)){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        cout << fixed << setprecision(10) << high << endl;        
    }
    return 0;
}