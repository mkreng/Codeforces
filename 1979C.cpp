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
        vint k(n);
        for(int i=0; i<n; i++){
            cin >> k[i];
        }
        int l=1;
        for(int i=0; i<n; i++){
            l=lcm(l, k[i]);
        }
        vint x(n);
        for(int i=0; i<n; i++){
            x[i]=l/k[i];
        }
        if(accumulate(x.begin(), x.end(), 0LL)>=l){
            cout << "-1\n";
        }
        else{
            for(auto i:x){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}