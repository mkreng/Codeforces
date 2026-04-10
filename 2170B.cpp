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
        for(auto &i:a){
            cin >> i;
        }
        int s=0, c=0;
        for(auto i:a){
            if(i>0){
                c++;
            }
            s+=i;
        }
        cout << c-max(0LL, n-1-s+c) << endl;
    }
    return 0;
}