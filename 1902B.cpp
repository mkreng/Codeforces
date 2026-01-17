#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int n, p, l, t;
bool check(int d){
    int tasks=(n-1)/7+1, taskpoints=min(tasks, 2*d)*t;
    return taskpoints+d*l>=p;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--){
        cin >> n >> p >> l >> t;
        int low=0, high=n;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(check(low)){
            cout << n-low << endl;
        }
        else{
            cout << n-high << endl;
        }
    }
    return 0;
}