#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int n, m, k;
bool check(int b){
    int seatsinrow=(m/(b+1))*b+(m%(b+1));
    return seatsinrow*n>=k;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int low=1, high=m;
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
            cout << low << endl;
        }
        else{
            cout << high << endl;
        }
    }
    return 0;
}