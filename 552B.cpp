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
    int ncpy=n, digits=0;
    while(ncpy>0){
        digits++;
        ncpy/=10;
    }
    int ans=0;
    for(int i=0; i<digits-1; i++){
        ans+=9LL*pow(10, i)*(i+1);
    }
    int temp=0;
    for(int i=0; i<digits-1; i++){
        temp+=9LL*pow(10, i);
    }
    ans+=(n-temp)*digits;
    cout << ans << endl;
    return 0;
}