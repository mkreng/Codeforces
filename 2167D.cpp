#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int x){
    if(x<=1){
        return false;
    }
    if(x%2==0){
        if(x==2){
            return true;
        }
        else{
            return false;
        }
    }
    for(int i=3; i*i<=x; i+=2){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll hcf=a[0];
        for(ll i=1; i<n; i++){
            hcf=gcd(hcf, a[i]);
        }
        ll ans=-1;
        if(hcf==1){
            ans=2;
        }
        else if(hcf%2!=0){
            ans=2;
        }
        else{
            for(ll i=3; i<100; i+=2){
                if(isprime(i)==true && hcf%i!=0 && hcf>1){
                    ans=i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}