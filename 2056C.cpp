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
        int n;
        cin >> n;
        if(n==6){
            cout << "1 1 2 3 1 2\n";
        }
        else{
            for(int i=1; i<n-1; i++){
                cout << i << " ";
            }
            cout << "1 2\n";
        }
    }
    return 0;
}