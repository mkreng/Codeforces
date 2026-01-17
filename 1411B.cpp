#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
bool check(ll n){
    ll temp=n;
    while(temp!=0){
        ll digit=temp%10;
        temp/=10;
        if(digit!=0 && n%digit!=0){
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
        for(ll i=n;; i++){
            if(check(i)){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}