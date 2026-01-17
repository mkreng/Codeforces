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
    while(k--){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout << n << endl;
    return 0;
}