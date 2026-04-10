#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int f, int w, int b){
    return w+b>=(f*(f+1))/2;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int w, b;
        cin >> w >> b;
        int low=0, high=1e6;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid, w, b)){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        if(check(high, w, b)){
            cout << high << endl;
        }
        else{
            cout << low << endl;
        }
    }
    return 0;
}