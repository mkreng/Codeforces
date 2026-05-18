#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(double m, int k, vint &a){
    int r=0;
    for(auto i:a){
        r+=(int)i/m;
    }
    return r>=k;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vint a(n);
    for(auto &i:a){
        cin >> i;
    }
    double low=0, high=1e7;
    for(int i=0; i<100; i++){
        double mid=(high+low)/2;
        if(check(mid, k, a)){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    cout << fixed << setprecision(10) << low << endl;
    return 0;
}