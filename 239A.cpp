#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll y, k, n;
    cin >> y >> k >> n;
    bool ans=false;
    for(ll i=0; i*k<=n; i++){
        if(k*i-y>0){
            ans=true;
            cout << k*i-y << " ";
        }
    }
    if(ans==false){
        cout << "-1";
    }
    cout << endl;
    return 0;
}