#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int l=1LL<<(n-1), j=l/2;
    while(l!=k){
        if(l>k){
            l-=j;
        }
        else{
            l+=j;
        }
        j/=2;
        n--;
    }
    cout << n << endl;
    return 0;
}