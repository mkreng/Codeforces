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
        int temp=1;
        while(temp<=n-1){
            temp*=2;
        }
        temp/=2;
        for(int i=temp-1; i>=0; i--){
            cout << i << " ";
        }
        for(int i=temp; i<n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}