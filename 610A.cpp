#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n%2){
        cout << "0\n";
    }
    else{
        int ans=n/4;
        if(n%4==0){
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}