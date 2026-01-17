#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if(m%n!=0){
        cout << "-1\n";
    }
    else{
        int q=m/n;
        int ans=0;
        while(q%2==0){
            q/=2;
            ans++;
        }
        while(q%3==0){
            q/=3;
            ans++;
        }
        if(q==1){
            cout << ans << endl;
        }
        else{
            cout << "-1\n" << endl;
        }
    }
    return 0;
}