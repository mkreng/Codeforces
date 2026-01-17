#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, m;
    cin >> n >> m;
    ll a[m];
    for(ll i=0; i<m; i++){
        cin >> a[i];
    }
    ll t=a[0]-1;
    for(ll i=0; i<m-1; i++){
        if(a[i+1]>=a[i]){
            t+=a[i+1]-a[i];
        }
        else{
            t+=n-a[i]+a[i+1];
        }
    }
    cout << t << endl;
    return 0;
}