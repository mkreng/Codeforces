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
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        if(a1==0){
            cout << "1\n";
        }
        else{
            cout << a1+2*min(a2, a3)+min(a1+1, abs(a2-a3)+a4) << endl;
        }
    }
    return 0;
}