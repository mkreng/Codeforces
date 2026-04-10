#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int f(int x){
    int ans=1;
    if(x==0 || x==1){
        return ans;
    }
    for(int i=2; i<=x; i++){
        ans*=i;
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << f(n)/f(n/2)/f(n/2)*f(n/2-1)*f(n/2-1)/2 << endl;
    return 0;
}