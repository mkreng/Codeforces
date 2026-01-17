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
        int x, n;
        cin >> x >> n;
        int temp=n%4, ans;
        if(temp==0){
            ans=0;
        }
        else if(temp==1){
            ans=(n/4)*(-4)-1;
        }
        else if(temp==2){
            ans=1;
        }
        else{
            ans=(n/4+1)*4;
        }
        if(x%2==0){
            cout << ans+x << endl;
        }
        else{
            cout << ans*(-1)+x << endl;
        }
    }
    return 0;
}