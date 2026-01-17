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
    vint ans(n);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        ans[temp-1]=i+1;
    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}