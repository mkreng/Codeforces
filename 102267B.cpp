#include <bits/stdc++.h>
using namespace std;
vector<bool> sieve(int n){
    vector<bool> primes(n+1, true);
    primes[0]=primes[1]=false;
    for(int i=2; i*i<=n; i++){
        if(primes[i]==true){
            for(int j=i*i; j<=n; j+=i){
                primes[j]=false;
            }
        }
    }
    return primes;
}
int main(){
    int n;
    cin >> n;
    vector<bool> array=sieve(n);
    for(int i=2; i<=n/2; i++){
        if(array[i]==true && array[n-i]==true){
            cout << i << " " << n-i << endl;
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}