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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int a_min=*min_element(a.begin(), a.end());
        if(a[0]==a_min){
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
        }
    }
    return 0;
}