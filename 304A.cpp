#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, ans=0;
    cin >> n;
    for(ll i=1; i*i<n*n; i++){
        for(ll j=i+1; i*i+j*j<=n*n; j++){
            ll temp=i*i+j*j;
            ll a=sqrt(temp);
            if(a*a==temp){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}