#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        bool odd=false, even=false;
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            if(odd==true && even==true){
                break;
            }
            if(a[i]%2==0){
                even=true;
            }
            if(a[i]%2==1){
                odd=true;
            }
        }
        if(odd==true && even==true){
            sort(a, a+n);
            for(ll i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else{
            for(ll i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}