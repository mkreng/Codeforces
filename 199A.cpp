#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    ll a=0, b=1, c=1;
    if(n==0){
        cout << "0 0 0\n";
    }
    else if(n==1){
        cout << "0 0 1\n";
    }
    else{
        while(c<n){
            a=b;
            b=c;
            c=a+b;
        }
        cout << "0 " << a << " " << b << endl;
    }
    return 0;
}