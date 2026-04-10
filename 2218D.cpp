#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vint p;
    vector<bool> sieve(300001, true);
    sieve[0]=false;
    sieve[1]=false;
    for(int i=2; i*i<=300000; i++){
        if(sieve[i]){
            for(int j=i*i; j<=300000; j+=i){
                sieve[j]=false;
            }
        }
    }
    p.push_back(1);
    for(int i=2; i<=300000; i++){
        if(sieve[i]){
            p.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            cout << p[i]*p[i+1] << " ";
        }
        cout << endl;
    }
    return 0;
}