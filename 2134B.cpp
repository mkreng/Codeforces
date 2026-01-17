#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
vector<bool> sieve(1e3+1, true);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    sieve[0]=false;
    sieve[1]=false;
    for(int i=2; i*i<=1e3; i++){
        if(sieve[i]){
            for(int j=i*i; j<=1e3; j+=i){
                sieve[j]=false;
            }
        }
    }
    while(t--){
        int n, k;
        cin >> n >> k;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int p=-1;
        for(int i=0; i<=1e3; i++){
            if(sieve[i] && k%i!=0){
                p=i;
                break;
            }
        }
        for(int i=0; i<n; i++){
            while(a[i]%p!=0){
                a[i]+=k;
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}