#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double c;
    cin >> c;
    double high=1e5, low=0;
    for(int i=0; i<100; i++){
        double mid=(high+low)/2;
        if(mid*mid+sqrt(mid)<c){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    cout << fixed << setprecision(10) << low << endl;
    return 0;
}