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
        int o=0, e=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2==0 && a[i]%2){
                e++;
            }
            if(i%2 && a[i]%2==0){
                o++;
            }
        }
        if(o==e){
            cout << o << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}