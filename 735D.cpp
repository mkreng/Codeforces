#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "1\n";
    }
    else{
        if(n%2){
            if(isPrime(n-2)){
                cout << "2\n";
            }
            else{
                cout << "3\n";
            }
        }
        else{
            cout << "2\n";
        }
    }
    return 0;
}