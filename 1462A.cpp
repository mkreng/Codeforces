#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll b[n];
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        ll l=0, r=n-1;
        for(ll i=0; i<n; i++){
            if(i%2==0){
                cout << b[l] << " ";
                l++;
            }
            else{
                cout << b[r] << " ";
                r--;
            }
        }
        cout << endl;
    }
    return 0;
}