#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    ll b[n];
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }
    sort(b, b+n);
    if(b[n-1]==b[0]){
        cout << "0 " << n*(n-1)/2 << endl;
        return 0;
    }
    ll max_diff=b[n-1]-b[0];
    ll small=1, large=1;
    for(ll i=1; i<n; i++){
        if(b[i]==b[0]){
            small++;
        }
        else{
            break;
        }
    }
    for(ll i=1; i<n; i++){
        if(b[n-1-i]==b[n-1]){
            large++;
        }
        else{
            break;
        }
    }
    cout << max_diff << " " << small*large << endl;
    return 0;
}