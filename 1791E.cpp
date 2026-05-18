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
        int neg=0, abss=0, mn=INT64_MAX;
        for(auto &i:a){
            cin >> i;
            if(i<=0){
                neg++;
            }
            abss+=abs(i);
            mn=min(mn, abs(i));
        }
        if(neg%2==0){
            cout << abss << endl;
        }
        else{
            cout << abss-2*mn << endl;
        }
    }
    return 0;
}