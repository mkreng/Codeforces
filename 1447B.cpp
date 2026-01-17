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
        int n, m;
        cin >> n >> m;
        int neg=0, mn=LONG_LONG_MAX, sum=0;
        for(int i=0; i<n*m; i++){
            int temp;
            cin >> temp;
            if(temp<0){
                neg++;
            }
            mn=min(mn, abs(temp));
            sum+=abs(temp);
        }
        if(neg%2){
            cout << sum-2*mn << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}