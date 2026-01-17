#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> d(a*b*c+1, 0);
    for(int i=1; i<=a*b*c; i++){
        for(int j=i; j<=a*b*c; j+=i){
            d[j]++;
        }
    }
    ll ans=0;
    const int mod=1073741824;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                ans+=d[i*j*k];
                if(ans>=mod){
                    ans%=mod;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}