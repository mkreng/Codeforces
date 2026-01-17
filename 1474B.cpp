#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int t;
    cin >> t;
    while(t--){
        ll d;
        cin >> d;
        vll primes;
        for(ll i=d+1;; i++){
            bool is_prime=true;
            for(ll j=2; j*j<=i; j++){
                if(i%j==0){
                    is_prime=false;
                    break;
                }
            }
            if(is_prime){
                primes.push_back(i);
                break;
            }
        }
        for(ll i=primes[0]+d;; i++){
            bool is_prime=true;
            for(ll j=2; j*j<=i; j++){
                if(i%j==0){
                    is_prime=false;
                    break;
                }
            }
            if(is_prime){
                primes.push_back(i);
                break;
            }
        }
        cout << min(primes[0]*primes[1], primes[0]*primes[0]*primes[0]) << endl;
    }
    return 0;
}