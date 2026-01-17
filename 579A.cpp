#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll x;
    cin >> x;
    int ans=0;
    while(x!=0){
        x=x&(x-1);
        ans++;
    }
    cout << ans << endl;
    return 0;
}