#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n%2){
        cout << -(n+1)/2 << endl;
    }
    else{
        cout << n/2 << endl;
    }
    return 0;
}