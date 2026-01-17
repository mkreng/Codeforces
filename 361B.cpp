#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    if(n==k){
        cout << "-1\n";
    }
    else{
        cout << n-k << " ";
        for(int i=1; i<=n; i++){
            if(i!=n-k){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}