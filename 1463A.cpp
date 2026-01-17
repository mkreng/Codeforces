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
        int a, b, c;
        cin >> a >> b >> c;
        int sum=a+b+c, q=sum/9;
        if(sum%9==0 && a>=q && b>=q && c>=q){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}