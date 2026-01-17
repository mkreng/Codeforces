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
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll b[n];
        b[0]=a[0];
        for(int i=1; i<n; i++){
            b[i]=max(b[i-1], a[i]);
        }
        ll cost=max(0ll, a[0]-min(a[0], b[1]-1));
        for(int i=2; i<n; i+=2){
            cost+=max(0ll, a[i]-min(a[i], b[i-1]-1));
        }
        cout << cost << endl;          
    }
    return 0;
}