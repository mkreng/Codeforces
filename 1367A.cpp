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
        string b;
        cin >> b;
        for(int i=0; i<b.size(); i++){
            if(i==0 || i%2){
                cout << b[i];
            }
        }
        cout << endl;
    }
    return 0;
}