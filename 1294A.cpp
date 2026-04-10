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
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int temp=a+b+c+n;
        if(temp%3){
            cout << "NO\n";
        }
        else{
            temp/=3;
            if(a<=temp && b<=temp && c<=temp){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}