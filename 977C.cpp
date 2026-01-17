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
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if(k==n){
        cout << a[n-1] << endl;
    }
    else if(k==0){
        if(a[0]-1>=1){
            cout << a[0]-1 << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    else{
        if(a[k]==a[k-1]){
            cout << "-1\n";
        }
        else{
            cout << a[k-1] << endl;
        }
    }
    return 0;
}