#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(){
    ll n;
    cin >> n;
    ll ans=0;
    while(n>=3){
        ll k=n/3;
        ans+=k;
        if(n%3==0){
            n=k;
        }
        else if(n%3==1){
            n=k+1;
        }
        else{
            n=k+2;
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}