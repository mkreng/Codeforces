#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int binpow(int a, int b){
    int res=1;
    while(b>0){
        if(b&1){
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int temp=binpow(4, n-3)*3;
    cout << (3*n-1)*temp << endl;
    return 0;
}