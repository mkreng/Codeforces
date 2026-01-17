#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<bool> isPrime(1000001, true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(ll i=2; i*i<=1000000; i++){
        if(isPrime[i]){
            for(ll j=i*i; j<=1000000; j+=i){
                isPrime[j]=false;
            }
        }
    }
    while(n--){
        ll x;
        cin >> x;
        ll temp=sqrt(x);
        if(temp*temp==x && isPrime[temp]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}