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
        int n, k;
        cin >> n >> k;
        if(n%2){
            cout << "1 " << n/2 << " " << n/2 << endl;
        }
        else if(n%4){
            cout << "2 " << n/2-1 << " " << n/2-1 << endl;
        }
        else{
            cout << n/4 << " " << n/4 << " " << n/2 << endl;
        }
    }
    return 0;
}