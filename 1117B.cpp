#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vint a(n);
    int x=INT64_MIN, y=INT64_MIN;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>=x){
            y=x;
            x=a[i];
        }
        else if(a[i]>=y){
            y=a[i];
        }
    }
    cout << (m/(k+1))*(k*x+y)+(m%(k+1))*x << endl;
    return 0;
}