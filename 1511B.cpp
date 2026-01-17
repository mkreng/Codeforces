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
        int x=pow(10, a-1);
        cout << x << " ";
        for(int i=0; i<b-c+1; i++){
            cout << "1";
        }
        for(int i=0; i<c-1; i++){
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}