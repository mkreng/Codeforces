#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, m;
    cin >> n >> m;
    int ans=n+1;
    while(isprime(ans)==false){
        ans++;
    }
    if(m==ans){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}