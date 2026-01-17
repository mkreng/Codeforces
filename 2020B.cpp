#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int k;
bool check(int n){
    int off=sqrtl(n);
    while((off+1)*(off+1)<=n){
        off++;
    }
    while(off*off>n){
        off--;
    }
    int on=n-off;
    return on>=k;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> k;
        int low=0, high=2e18;
        while(high-low>1){
            int mid=(high+low)/2;
            //FFFFTTTTT
            if(check(mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(check(low)){
            cout << low << endl;
        }
        else{
            cout << high << endl;
        }
    }
    return 0;
}