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
        ll w, h;
        cin >> w >> h;
        ll side1;
        cin >> side1;
        vll a(side1);
        for(ll i=0; i<side1; i++){
            cin >> a[i];
        }
        ll side2;
        cin >> side2;
        vll b(side2);
        for(ll i=0; i<side2; i++){
            cin >> b[i];
        }
        ll side3;
        cin >> side3;
        vll c(side3);
        for(ll i=0; i<side3; i++){
            cin >> c[i];
        }
        ll side4;
        cin >> side4;
        vll d(side4);
        for(ll i=0; i<side4; i++){
            cin >> d[i];
        }
        ll possibility1=(a[side1-1]-a[0])*h, possibility2=(b[side2-1]-b[0])*h, possibility3=(c[side3-1]-c[0])*w, possibility4=(d[side4-1]-d[0])*w;
        cout << max(possibility1, max(possibility2, max(possibility3, possibility4))) << endl;
    }
    return 0;
}